# Library-Management-System-in-c
Library Management System developed in C using Linked Lists and File Handling. Features include Add, Update, Remove, Search, View, Issue, and Return Books with automatic issue/due date management and persistent data storage.
1. Objectives
   ---------------------------------------------------------------------
- To develop a Library Management System using C programming.
- To manage book records using singly linked lists and file handling.
- To automate book issuing, returning, and due date management.
- 
2. Abstract
   ----------------------------------------------------------------------
The Library Management System is a menu-driven application developed using C. It uses singly linked lists to manage book and issue records dynamically and file handling to maintain persistent data storage. The system provides functionalities to add, update, remove, search, and view books, along with book issuing and returning. It automatically generates issue dates and due dates, updates book availability, and maintains transaction records.

3. Problem Identification
   -------------------------------------------------------------------------
- Manual maintenance of book records is time-consuming.
- Tracking book availability and issued books can be difficult.
- Managing issue dates and due dates manually may lead to errors.
- Maintaining records between application executions requires persistent storage.
  
4. **Proposed Method****
------------------------------------------------------------------------------
- Develop a menu-driven application using C.
- Use singly linked lists for dynamic book and issue record management.
- Implement book addition, modification, deletion, searching, and viewing.
- Automate book issue and return operations.
- Generate issue dates and due dates automatically.
- Use file handling to save and retrieve book and issue records.
 
5.** Hardware Requirements**
   ------------------------------------------------
- Computer or laptop
- Minimum 2 GB RAM
- Keyboard and monitor
  
**6. Software Requirements**
---------------------------------------------------
- Programming Language: C
- Compiler: GCC
- Build Tool: Makefile
- Operating System: Linux or Windows
- Data Storage: Text files
 ## 7. System Architecture

```
             +------------------------+
             |    Start Application   |
             +------------------------+
                        |
                        v
             +------------------------+
             | Load Saved Book and    |
             | Issue Records          |
             +------------------------+
                        |
                        v
             +------------------------+
             |       Main Menu        |
             +------------------------+
                        |
                        v
             +------------------------+
             |   Select Operation     |
             +------------------------+
                        |
        +---------------+----------------+
        |               |                |
        v               v                v
 +--------------+ +-------------+ +---------------+
 | Book         | | Search and  | | Issue / Return|
 | Management   | | View Books  | | Books         |
 +--------------+ +-------------+ +---------------+
        |               |                |
        +---------------+----------------+
                        |
                        v
             +------------------------+
             |   Update Linked Lists  |
             +------------------------+
                        |
                        v
             +------------------------+
             |     File Handling     |
             +------------------------+
                        |
               +--------+--------+
               |                 |
               v                 v
        +-------------+   +-------------+
        |  books.txt  |   |  issues.txt |
        +-------------+   +-------------+
                        |
                        v
             +------------------------+
             |    Continue / Exit     |
             +------------------------+
```







                 
  
 9. Software Components
    --------------------------------------------------------------------
- C Programming: Implements the application logic.
- Singly Linked Lists: Dynamically manage book and issue records.
- Pointers and Structures: Connect nodes and organize record data.
- File Handling: Stores and retrieves records using books.txt and issues.txt.
- Date and Time Handling: Generates issue, due, and return dates using <time.h>.
- Make file: Automates compilation of the source files.
 
9. Working Principle
    -------------------------------------------------------------------
1. The application loads existing book and issue records from files.
2. The main menu displays the available operations.
3. The user selects an operation.
4. Book operations update or retrieve records from the linked list.
5. During book issuance, the system checks availability and generates the issue date and due date.
6. During book return, the system records the return date and updates book availability.
7. The updated records are saved to files when the user selects Save Data or Exit.
 
10. Expected Output
    ------------------------------------------------------------
- Successful addition, updating, and removal of book records.
- Book details displayed through search and view operations.
- Automatic issue date and due date generation.
- Updated book availability after issuing and returning books.
- Issue and return records maintained in files.
- Previously saved records loaded when the application starts.
- 
11. Advantages
  -----------------------------------------------
- Reduces manual library record maintenance.
- Provides efficient book searching and management.
- Uses dynamic memory allocation for linked-list operations.
- Maintains records across program executions.
- Automates issue and due date generation.
- Improves book availability tracking.
- 
12. Applications
  -----------------------------------
- School and college libraries.
- Small library record management.
- Book inventory management.
- Book issue and return tracking.
- C programming and data structures learning.*
**13. Future Scope**

- Student registration and management.
- Automatic overdue fine calculation.
- User authentication and access control.
- Improved input validation.
- Database integration using MySQL or SQLite.
- Graphical user interface development.
14. Conclusion
The Library Management System demonstrates the practical application of C programming, singly linked lists, pointers, dynamic memory allocation, and file handling. It simplifies book management, automates issue and return operations, generates dates automatically, and maintains persistent records, providing a foundation for further library management system enhancements. 
