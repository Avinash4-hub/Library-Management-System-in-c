#include "library.h"

void remove_book_menu(void)
{
    char choice;
    int id;
    char title[50];

    BOOK *temp, *prev;

    printf("\n=====================\n");
    printf("     REMOVE BOOK\n");
    printf("=====================\n");
    printf("A. By Book ID\n");
    printf("B. By Book Name\n");
    printf("Enter Choice : ");
    scanf(" %c", &choice);

    switch(choice)
    {
        case 'A':
        case 'a':

            if(book_hptr == NULL)
            {
                printf("No Books Available\n");
                return;
            }

            printf("Enter Book ID : ");
            scanf("%d", &id);

            temp = book_hptr;
            prev = NULL;

            while(temp)
            {
                if(temp->book_id == id)
                {
                    if(prev == NULL)
                        book_hptr = temp->next;
                    else
                        prev->next = temp->next;

                    free(temp);

                    printf("Book Deleted Successfully...\n");
                    return;
                }

                prev = temp;
                temp = temp->next;
            }

            printf("Book ID Not Found\n");
            break;

        case 'B':
        case 'b':

            if(book_hptr == NULL)
            {
                printf("No Books Available\n");
                return;
            }

            printf("Enter Book Name : ");
            scanf(" %[^\n]", title);

            temp = book_hptr;
            prev = NULL;

            while(temp)
            {
                if(strcmp(temp->title, title) == 0)
                {
                    if(prev == NULL)
                        book_hptr = temp->next;
                    else
                        prev->next = temp->next;

                    free(temp);

                    printf("Book Deleted Successfully...\n");
                    return;
                }

                prev = temp;
                temp = temp->next;
            }

            printf("Book Name Not Found\n");
            break;

        default:
            printf("Invalid Choice\n");
    }
}
