#include "library.h"

void search_book_menu(void)
{
    char choice;
    int id;
    char title[50];
    char author[50];

    BOOK *temp;
    int found = 0;

    printf("\n=====================\n");
    printf("    SEARCH BOOK\n");
    printf("=====================\n");
    printf("A. By Book ID\n");
    printf("B. By Book Name\n");
    printf("C. By Author Name\n");
    printf("D. Back\n");

    printf("Enter Choice : ");
    scanf(" %c", &choice);

    switch(choice)
    {
        case 'A':
        case 'a':

            printf("Enter Book ID : ");
            scanf("%d", &id);

            temp = book_hptr;

            while(temp)
            {
                if(temp->book_id == id)
                {
                    printf("\nBook Found\n");
                    printf("Book ID   : %d\n", temp->book_id);
                    printf("Title     : %s\n", temp->title);
                    printf("Author    : %s\n", temp->author);
                    printf("Quantity  : %d\n", temp->quantity);

                    found = 1;
                    break;
                }

                temp = temp->next;
            }

            if(found == 0)
                printf("Book Not Found\n");

            break;

        case 'B':
        case 'b':

            printf("Enter Book Name : ");
            scanf(" %[^\n]", title);

            temp = book_hptr;

            while(temp)
            {
                if(strcmp(temp->title, title) == 0)
                {
                    printf("\nBook Found\n");
                    printf("Book ID   : %d\n", temp->book_id);
                    printf("Title     : %s\n", temp->title);
                    printf("Author    : %s\n", temp->author);
                    printf("Quantity  : %d\n", temp->quantity);

                    found = 1;
                    break;
                }

                temp = temp->next;
            }

            if(found == 0)
                printf("Book Not Found\n");

            break;

        case 'C':
        case 'c':

            printf("Enter Author Name : ");
            scanf(" %[^\n]", author);

            temp = book_hptr;

            while(temp)
            {
                if(strcmp(temp->author, author) == 0)
                {
                    printf("\nBook ID   : %d\n", temp->book_id);
                    printf("Title     : %s\n", temp->title);
                    printf("Author    : %s\n", temp->author);
                    printf("Quantity  : %d\n\n", temp->quantity);

                    found = 1;
                }

                temp = temp->next;
            }

            if(found == 0)
                printf("No Books Found For This Author\n");

            break;

        case 'D':
        case 'd':
            return;

        default:
            printf("Invalid Choice\n");
    }
}
