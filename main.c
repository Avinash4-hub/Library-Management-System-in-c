#include <stdio.h>
#include <stdlib.h>
#include"library.h"
BOOK *book_hptr=NULL;
int main()
{
    int choice;

   load_books();
   load_issues();

    while (1)
    {
        printf("\t\t\t\t  +-----------------------------------+\n");
        printf("\t\t\t\t  |   LIBRARY MANAGEMENT SYSTEM (LMS) |\n");
        printf("\t\t\t\t  +-----------------------------------+\n");
        printf("\t\t\t\t  |   1. Add New Book                 |\n");
        printf("\t\t\t\t  |   2. Update Book Details          |\n");
        printf("\t\t\t\t  |   3. Remove Book                  |\n");
        printf("\t\t\t\t  |   4. Search Book                  |\n");
        printf("\t\t\t\t  |   5. View All Books               |\n");
        printf("\t\t\t\t  |   6. Issue Book                   |\n");
        printf("\t\t\t\t  |   7. Return Book                  |\n");
        printf("\t\t\t\t  |   8. List Issued Books            |\n");
        printf("\t\t\t\t  |   9. Save Data                    |\n");
        printf("\t\t\t\t  |  10. Exit                         |\n");
        printf("\t\t\t\t  +-----------------------------------+\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                add_book();
                break;

            case 2:
                update_book_menu();
                break;

            case 3:
                remove_book_menu();
                break;

            case 4:
                search_book_menu();
                break;

            case 5:
                view_all_books();
                break;

            case 6:
                issue_book();
                break;

            case 7:
                return_book();
                break;

            case 8:
                list_issued_books();
                break;

            case 9:
		save_books();
                save_issues();
                printf("\nData Saved Successfully...\n");
                break;

            case 10:
                save_books();
                save_issues();
                printf("\nExiting LMS...\n");
                exit(0);

            default:
                printf("\nInvalid Choice...\n");
        }
    }

    return 0;
}
