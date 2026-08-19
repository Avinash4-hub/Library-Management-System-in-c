#include "library.h"

void update_book_menu(void)
{
    int id, ch;
    BOOK *temp;

    if(book_hptr == NULL)
    {
        printf("No Books Available\n");
        return;
    }

    printf("\n========== UPDATE BOOK ==========\n");

    printf("Enter Book ID : ");
    scanf("%d", &id);

    temp = book_hptr;

    while(temp)
    {
        if(temp->book_id == id)
        {
            printf("\nBook Found\n");

            printf("Book ID   : %d\n", temp->book_id);
            printf("Title     : %s\n", temp->title);
            printf("Author    : %s\n", temp->author);
            printf("Quantity  : %d\n", temp->quantity);

            printf("\n");
            printf("1. Update Book ID\n");
            printf("2. Update Title\n");
            printf("3. Update Author\n");
            printf("4. Update Quantity\n");
            printf("5. Update All Fields\n");

            printf("Enter Choice : ");
            scanf("%d", &ch);

            switch(ch)
            {
                case 1:

                    printf("Enter New Book ID : ");
                    scanf("%d", &temp->book_id);

                    printf("Book ID Updated Successfully\n");
                    break;

                case 2:

                    printf("Enter New Title : ");
                    scanf(" %[^\n]", temp->title);

                    printf("Title Updated Successfully\n");
                    break;

                case 3:

                    printf("Enter New Author : ");
                    scanf(" %[^\n]", temp->author);

                    printf("Author Updated Successfully\n");
                    break;

                case 4:

                    printf("Enter New Quantity : ");
                    scanf("%d", &temp->quantity);

                    printf("Quantity Updated Successfully\n");
                    break;

                case 5:

                    printf("Enter New Book ID : ");
                    scanf("%d", &temp->book_id);

                    printf("Enter New Title : ");
                    scanf(" %[^\n]", temp->title);

                    printf("Enter New Author : ");
                    scanf(" %[^\n]", temp->author);

                    printf("Enter New Quantity : ");
                    scanf("%d", &temp->quantity);

                    printf("All Fields Updated Successfully\n");
                    break;

                default:
                    printf("Invalid Choice\n");
            }

            return;
        }

        temp = temp->next;
    }

    printf("Book ID Not Found\n");
}
