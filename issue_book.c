#include "library.h"
#include <time.h>

ISSUE *issue_hptr = NULL;

void issue_book(void)
{
    int book_id;

    BOOK *temp;
    ISSUE *new, *t;

    time_t cur_time;
    struct tm *tm_info;

    if(book_hptr == NULL)
    {
        printf("No Books Available\n");
        return;
    }

    printf("\n=====================\n");
    printf("      ISSUE BOOK\n");
    printf("=====================\n");

    printf("Enter Book ID : ");
    scanf("%d", &book_id);

    temp = book_hptr;

    while(temp)
    {
        if(temp->book_id == book_id)
        {
            if(temp->quantity <= 0)
            {
                printf("Book Not Available\n");
                return;
            }

            new = (ISSUE *)malloc(sizeof(ISSUE));

            if(new == NULL)
            {
                printf("Memory Allocation Failed\n");
                return;
            }

            printf("Enter Issue ID : ");
            scanf("%d", &new->issue_id);

            printf("Enter User ID : ");
            scanf("%d", &new->user_id);

            printf("Enter User Name : ");
            scanf(" %[^\n]", new->user_name);

            /* Issue Date = Current Date */

            cur_time = time(NULL);
            tm_info = localtime(&cur_time);

            sprintf(new->issue_date,
                    "%02d/%02d/%04d",
                    tm_info->tm_mday,
                    tm_info->tm_mon + 1,
                    tm_info->tm_year + 1900);

            /* Due Date = 7 Days Later */

            cur_time += (7 * 24 * 60 * 60);

            tm_info = localtime(&cur_time);

            sprintf(new->due_date,
                    "%02d/%02d/%04d",
                    tm_info->tm_mday,
                    tm_info->tm_mon + 1,
                    tm_info->tm_year + 1900);

            strcpy(new->return_date, "Not Returned");

            new->returned = 0;
            new->book_id = temp->book_id;

            /* Reduce Quantity */

            temp->quantity--;

            new->next = NULL;

            if(issue_hptr == NULL)
            {
                issue_hptr = new;
            }
            else
            {
                t = issue_hptr;

                while(t->next)
                    t = t->next;

                t->next = new;
            }

            printf("\nBook Issued Successfully...\n");

            printf("Issue Date : %s\n", new->issue_date);
            printf("Due Date   : %s\n", new->due_date);
            printf("Available Quantity : %d\n", temp->quantity);

            return;
        }

        temp = temp->next;
    }

    printf("Book ID Not Found\n");
}
