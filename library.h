#ifndef __LIBRARY_H__
#define __LIBRARY_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Book Structure */
typedef struct book
{
    int book_id;
    char title[50];
    char author[50];
    int quantity;
    struct book *next;
}BOOK;

/* Issue Structure */
typedef struct issue
{
    int issue_id;
    int book_id;
    int user_id;
    char user_name[50];
    char issue_date[20];
    char due_date[20];
    char return_date[20];
    int returned;
    struct issue *next;
}ISSUE;

/* Global Head Pointers */
extern BOOK *book_hptr;
extern ISSUE *issue_hptr;

/* Book Functions */
void add_book(void);
void update_book_menu(void);
void remove_book_menu(void);
void search_book_menu(void);
void view_all_books(void);

void issue_book(void);
void return_book(void);
void list_issued_books(void);

void save_books(void);
void load_books(void);
void save_issues(void);
void load_issues(void);

void get_current_date(char *);
void get_due_date(char *, int);
#endif
