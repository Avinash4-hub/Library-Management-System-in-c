#include "library.h"

void save_books(void)
{
    FILE *fp;
    BOOK *temp;

    fp = fopen("books.txt", "w");

    if(fp == NULL)
    {
        printf("Unable to Open File\n");
        return;
    }

    temp = book_hptr;

    while(temp)
    {
        fprintf(fp,
                "%d|%s|%s|%d\n",
                temp->book_id,
                temp->title,
                temp->author,
                temp->quantity);

        temp = temp->next;
    }

    fclose(fp);

    printf("Books Saved Successfully...\n");
}
