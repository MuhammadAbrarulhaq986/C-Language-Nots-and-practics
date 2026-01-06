#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold book details
typedef struct Book
{
    int id;
    char title[100];
    char author[100];
    int available; // 1 if available, 0 if borrowed
    struct Book *next;
} Book;

Book *head = NULL; // Head of the linked list

// Function to add a new book
void addBook()
{
    Book *newBook = (Book *)malloc(sizeof(Book));
    printf("Enter Book ID: ");
    scanf("%d", &newBook->id);
    getchar(); // Consume newline
    printf("Enter Book Title: ");
    fgets(newBook->title, sizeof(newBook->title), stdin);
    newBook->title[strcspn(newBook->title, "\n")] = '\0'; // Remove newline
    printf("Enter Author Name: ");
    fgets(newBook->author, sizeof(newBook->author), stdin);
    newBook->author[strcspn(newBook->author, "\n")] = '\0'; // Remove newline
    newBook->available = 1;
    newBook->next = head;
    head = newBook;
    printf("Book added successfully!\n");
}

// Function to display all books
void displayBooks()
{
    if (head == NULL)
    {
        printf("No books in the library.\n");
        return;
    }
    Book *temp = head;
    printf("\nLibrary Books:\n");
    while (temp != NULL)
    {
        printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
               temp->id, temp->title, temp->author,
               temp->available ? "Available" : "Borrowed");
        temp = temp->next;
    }
}

// Function to search for a book by title or author
void searchBook()
{
    char keyword[100];
    getchar(); // Consume newline
    printf("Enter book title or author to search: ");
    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = '\0'; // Remove newline

    Book *temp = head;
    int found = 0;
    while (temp != NULL)
    {
        if (strstr(temp->title, keyword) || strstr(temp->author, keyword))
        {
            printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
                   temp->id, temp->title, temp->author,
                   temp->available ? "Available" : "Borrowed");
            found = 1;
        }
        temp = temp->next;
    }
    if (!found)
    {
        printf("No book found with the given keyword.\n");
    }
}

// Function to borrow a book
void borrowBook()
{
    int bookID;
    printf("Enter the Book ID to borrow: ");
    scanf("%d", &bookID);

    Book *temp = head;
    while (temp != NULL)
    {
        if (temp->id == bookID)
        {
            if (temp->available)
            {
                temp->available = 0;
                printf("You have borrowed the book: %s\n", temp->title);
            }
            else
            {
                printf("Sorry, this book is already borrowed.\n");
            }
            return;
        }
        temp = temp->next;
    }
    printf("Book not found.\n");
}

// Function to return a book
void returnBook()
{
    int bookID;
    printf("Enter the Book ID to return: ");
    scanf("%d", &bookID);

    Book *temp = head;
    while (temp != NULL)
    {
        if (temp->id == bookID)
        {
            if (!temp->available)
            {
                temp->available = 1;
                printf("You have returned the book: %s\n", temp->title);
            }
            else
            {
                printf("This book was not borrowed.\n");
            }
            return;
        }
        temp = temp->next;
    }
    printf("Book not found.\n");
}

// Function to save books to a file
void saveBooksToFile()
{
    FILE *file = fopen("library_data.txt", "w");
    if (!file)
    {
        printf("Error saving data.\n");
        return;
    }
    Book *temp = head;
    while (temp != NULL)
    {
        fprintf(file, "%d,%s,%s,%d\n", temp->id, temp->title, temp->author, temp->available);
        temp = temp->next;
    }
    fclose(file);
    printf("Library data saved successfully.\n");
}

// Function to load books from a file
void loadBooksFromFile()
{
    FILE *file = fopen("library_data.txt", "r");
    if (!file)
    {
        return; // No previous data found
    }
    while (!feof(file))
    {
        Book *newBook = (Book *)malloc(sizeof(Book));
        if (fscanf(file, "%d,%99[^,],%99[^,],%d\n", &newBook->id, newBook->title, newBook->author, &newBook->available) != 4)
        {
            free(newBook);
            break;
        }
        newBook->next = head;
        head = newBook;
    }
    fclose(file);
}

// Function to free memory before exiting
void freeMemory()
{
    Book *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// Main function with menu
int main()
{
    loadBooksFromFile(); // Load previous data if available
    int choice;

    do
    {
        printf("\n=== Library Management System ===\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Borrow Book\n");
        printf("5. Return Book\n");
        printf("6. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBooks();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            borrowBook();
            break;
        case 5:
            returnBook();
            break;
        case 6:
            saveBooksToFile();
            freeMemory();
            printf("Exiting the system. Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}
