#include "library.h"

void add_book(void)
{
    BOOK *new, *temp;
    char op;

    do
    {
        new = (BOOK *)malloc(sizeof(BOOK));

        if(new == NULL)
        {
            printf("Memory Allocation Failed\n");
            return;
        }

        printf("\n=================================\n");
        printf("          ADD BOOK\n");
        printf("=================================\n");

        printf("Enter Book ID : ");
        scanf("%d", &new->book_id);

        printf("Enter Book Title : ");
        scanf(" %[^\n]", new->title);

        printf("Enter Author Name : ");
        scanf(" %[^\n]", new->author);

        printf("Enter Quantity : ");
        scanf("%d", &new->quantity);

        new->next = NULL;

        if(book_hptr == NULL)
        {
            book_hptr = new;
        }
        else
        {
            temp = book_hptr;

            while(temp->next)
                temp = temp->next;

            temp->next = new;
        }

        printf("\nBook Added Successfully...\n");

        printf("\nDo you want to add another book (y/n) : ");
        scanf(" %c", &op);

    } while(op == 'y' || op == 'Y');
}
