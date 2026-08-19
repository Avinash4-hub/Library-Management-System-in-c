#include "library.h"

void load_issues(void)
{
    FILE *fp;
    ISSUE *new, *temp;

    fp = fopen("issues.txt", "r");

    if(fp == NULL)
        return;

    while(1)
    {
        new = (ISSUE *)malloc(sizeof(ISSUE));

        if(fscanf(fp,
                  "%d|%d|%d|%49[^|]|%19[^|]|%19[^|]|%19[^|]|%d\n",
                  &new->issue_id,
                  &new->book_id,
                  &new->user_id,
                  new->user_name,
                  new->issue_date,
                  new->due_date,
                  new->return_date,
                  &new->returned) != 8)
        {
            free(new);
            break;
        }

        new->next = NULL;

        if(issue_hptr == NULL)
            issue_hptr = new;
        else
        {
            temp = issue_hptr;

            while(temp->next)
                temp = temp->next;

            temp->next = new;
        }
    }

    fclose(fp);
}
