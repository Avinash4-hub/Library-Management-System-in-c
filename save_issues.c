#include "library.h"

void save_issues(void)
{
    FILE *fp;
    ISSUE *temp;

    fp = fopen("issues.txt", "w");

    if(fp == NULL)
        return;

    temp = issue_hptr;

    while(temp)
    {
        fprintf(fp,
                "%d|%d|%d|%s|%s|%s|%s|%d\n",
                temp->issue_id,
                temp->book_id,
                temp->user_id,
                temp->user_name,
                temp->issue_date,
                temp->due_date,
                temp->return_date,
                temp->returned);

        temp = temp->next;
    }

    fclose(fp);
}
