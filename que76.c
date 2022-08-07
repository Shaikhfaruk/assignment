#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char sub[50];
    unsigned long int bookId;
};

void addBook(struct Books book);
void printBook(struct Books book);

int main()
{
    struct Books book1;
    struct Books book2;

    addBook(book1);
    addBook(book2);

    printBook(book1);
    printBook(book2);

    return 0;
}

void addBook(struct Books book)
{
    printf("Enter the book title: ");
    scanf("%s", book.title);
    printf("Enter the book author: ");
    scanf("%s", &book.author);
    printf("Enter the book subject: ");
    scanf("%s", &book.sub);
    printf("Enter the book id: ");
    scanf("%ld", &book.bookId);
}

void printBook(struct Books book)
{
    printf("Book title: %s\n", book.title);
    printf("Book author: %s\n", book.author);
    printf("Book subject: %s\n", book.sub);
    printf("Book id: %ld\n", book.bookId);
}