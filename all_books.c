#include "library.h"

void view_all_books(void)
{
    BOOK *temp;

    if(book_hptr == NULL)
    {
        printf("\nNo Books Available...\n");
        return;
    }

    temp = book_hptr;

printf("\n");
printf("\t\t+====================================================================+\n");
printf("\t\t|                        ALL BOOK RECORDS                            |\n");
printf("\t\t+====================================================================+\n");
printf("\t\t%-10s %-25s %-20s %-10s |\n",
       "Book ID", "Title", "Author", "Quantity");
printf("\t\t-------------------------------------------------------------------- |\n");

while(temp)
{
    printf("|\t\t%-10d %-25s %-20s %-10d|\n",
           temp->book_id,
           temp->title,
           temp->author,
           temp->quantity);

    temp = temp->next;
}
printf("\t\t+====================================================================+\n");
}
