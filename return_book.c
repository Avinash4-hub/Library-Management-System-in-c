#include "library.h"
#include <time.h>

void return_book(void)
{
    int issue_id;

    ISSUE *issue_temp;
    BOOK *book_temp;

    time_t cur_time;
    struct tm *tm_info;

    if(issue_hptr == NULL)
    {
        printf("No Issued Books Found\n");
        return;
    }

    printf("\n=====================\n");
    printf("     RETURN BOOK\n");
    printf("=====================\n");

    printf("Enter Issue ID : ");
    scanf("%d", &issue_id);

    issue_temp = issue_hptr;

    while(issue_temp)
    {
        if(issue_temp->issue_id == issue_id)
        {
            if(issue_temp->returned == 1)
            {
                printf("Book Already Returned\n");
                return;
            }

            /* Return Date = Today's Date */

            cur_time = time(NULL);
            tm_info = localtime(&cur_time);

            sprintf(issue_temp->return_date,
                    "%02d/%02d/%04d",
                    tm_info->tm_mday,
                    tm_info->tm_mon + 1,
                    tm_info->tm_year + 1900);

            issue_temp->returned = 1;

            /* Increase Book Quantity */

            book_temp = book_hptr;

            while(book_temp)
            {
                if(book_temp->book_id == issue_temp->book_id)
                {
                    book_temp->quantity++;
                    break;
                }

                book_temp = book_temp->next;
            }

            printf("\nBook Returned Successfully...\n");
            printf("Return Date : %s\n", issue_temp->return_date);

            if(book_temp)
                printf("Available Quantity : %d\n",
                       book_temp->quantity);

            return;
        }

        issue_temp = issue_temp->next;
    }

    printf("Issue ID Not Found\n");
}
