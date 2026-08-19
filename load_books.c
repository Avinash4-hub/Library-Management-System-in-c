#include "library.h"

void load_books(void)
{
    FILE *fp;
    BOOK *new, *temp;

    fp = fopen("books.txt", "r");

    if(fp == NULL)
        return;

    while(1)
    {
        new = (BOOK *)malloc(sizeof(BOOK));

        if(fscanf(fp,
                  "%d|%49[^|]|%49[^|]|%d\n",
                  &new->book_id,
                  new->title,
                  new->author,
                  &new->quantity) != 4)
        {
            free(new);
            break;
        }

        new->next = NULL;

        if(book_hptr == NULL)
            book_hptr = new;
        else
        {
            temp = book_hptr;

            while(temp->next)
                temp = temp->next;

            temp->next = new;
        }
    }

    fclose(fp);
}
