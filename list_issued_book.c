#include "library.h"

void list_issued_books(void)
{
    ISSUE *temp;

    if(issue_hptr == NULL)
    {
        printf("\nNo Issued Books Found...\n");
        return;
    }

    temp = issue_hptr;

    printf("\n");
    printf("+=============================================================================================================+\n");
    printf("|                                         ISSUED BOOKS LIST                                                   |\n");
    printf("+=============================================================================================================+\n");

    printf("%-10s %-10s %-10s %-20s %-15s %-15s %-15s %-10s\n",
           "IssueID",
           "BookID",
           "UserID",
           "UserName",
           "IssueDate",
           "DueDate",
           "ReturnDate",
           "Status");

    printf("---------------------------------------------------------------------------------------------------------------\n");

    while(temp)
    {
        printf("%-10d %-10d %-10d %-20s %-15s %-15s %-15s %-10s\n",
               temp->issue_id,
               temp->book_id,
               temp->user_id,
               temp->user_name,
               temp->issue_date,
               temp->due_date,
               temp->return_date,
               temp->returned ? "Returned" : "Issued");

        temp = temp->next;
    }

    printf("+=============================================================================================================+\n");
}
