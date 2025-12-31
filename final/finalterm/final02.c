//2021111470 이상재 leeshangjae 프기초 템플릿

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>


#define MAX_BOOK 10

typedef struct {
    char title[50];
    char author[30];
    int price;
} book;

int book_count = 0;  // 전체 구조체 배열에 저장된 책 개수


int readBooksFile(book *booklib);
void printMenu();
void printAllBooks(book *booklib);
void addNewBook(book *booklib);
void searchBook(book *booklib);
void updateBook(book *booklib);
void saveAndExit(book *booklib);

int main()
{
    srand(time(NULL));

    book booklib[MAX_BOOK] = {0};
    int choice;
    
    if(readBooksFile(booklib) == -1)
    {
        return 1;
    }

    while(1)
    {
        printMenu();
        printf("Type a number: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printAllBooks(booklib);
                break;
            case 2:
                addNewBook(booklib);
                break;
            case 3:
                searchBook(booklib);
                break;
            case 4:
                updateBook(booklib);
                break;
            case 5:
                saveAndExit(booklib);
                return 0;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }


    return 0;
}


int readBooksFile(book *booklib)
{
    FILE *fin = fopen("books.txt", "r");

    if(fin == NULL)
    {
        printf("Cannot open books.txt\n");
        return -1;
    }

    char line[100] = {0};
    int index = 0;
    
    while (fgets(line, sizeof(line), fin) != NULL && index < MAX_BOOK)
    {
        sscanf(line, "%[^,],%[^,],%d",
                  booklib[index].title,
               booklib[index].author,
               &booklib[index].price);
        index++;
    }

    book_count = index;
    fclose(fin);

    printf("Read books.txt (%d books) successfully.\n", book_count);
    return 0;
}

void printMenu() {
    printf("====================================\n");
    printf(" Book Management Program\n");
    printf(" 1. Print All Books\n");
    printf(" 2. Add New Book\n");
    printf(" 3. Search Book\n");
    printf(" 4. Update Book Information\n");
    printf(" 5. Save Book Data and Exit Program\n");
    printf("====================================\n");
}

void printAllBooks(book *booklib) {
    printf("Total Book Count: %d\n", book_count);
    for (int i = 0; i < book_count; i++) {
        printf("[%d] Title: %s, Author: %s, Price: %d\n",
               i + 1,
               booklib[i].title,
               booklib[i].author,
               booklib[i].price);
    }
}

void addNewBook(book *booklib) {
    if (book_count >= MAX_BOOK) {
        printf("No empty space.(%d Books)\n", MAX_BOOK);
        return;
    }

    char title[50], author[30];
    int price;

    printf("Type a new book title(Max: 50 chars): ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';

    printf("Type a new book author(Max: 30 chars): ");
    fgets(author, sizeof(author), stdin);
    author[strcspn(author, "\n")] = '\0';

    printf("Type a new book price: ");
    scanf("%d", &price);
    getchar();

    strcpy(booklib[book_count].title, title);
    strcpy(booklib[book_count].author, author);
    booklib[book_count].price = price;
    book_count++;

    printf("A new book added.(book count: %d)\n", book_count);
}

void searchBook(book *booklib) {
    char keyword[50];
    int minPrice, maxPrice;
    int found = 0;

    printf("Type a title keyword for search: ");
    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = '\0';

    printf("Type a price range(ex: 10000 20000): ");
    scanf("%d %d", &minPrice, &maxPrice);
    getchar();

    for (int i = 0; i < book_count; i++) {
        if (strstr(booklib[i].title, keyword) != NULL &&
            booklib[i].price >= minPrice &&
            booklib[i].price <= maxPrice) {
            printf("[%d] Title: %s, Author: %s, Price: %d\n",
                   i + 1,
                   booklib[i].title,
                   booklib[i].author,
                   booklib[i].price);
            found++;
        }
    }

    if (found > 0) {
        printf("Total %d books found\n\n", found);
    } else {
        printf("No Search Result(%s, %d ~ %d)\n", keyword, minPrice, maxPrice);
    }
}

void updateBook(book *booklib) {
    int index;
    char newTitle[50], newAuthor[30];
    int newPrice;

    printf("Type a index for updating: ");
    scanf("%d", &index);
    getchar();

   
    if (index < 1 || index > book_count) {
        printf("Out of index\n");
        return;
    }

    
    int arrIdx = index - 1;

   
    printf("[%d] Title: %s, Author: %s, Price: %d\n",
           index,
           booklib[arrIdx].title,
           booklib[arrIdx].author,
           booklib[arrIdx].price);

    
    printf("Enter a new title(Enter: skip): ");
    fgets(newTitle, sizeof(newTitle), stdin);
    newTitle[strcspn(newTitle, "\n")] = '\0';

   
    printf("Enter a new author name(Enter: skip): ");
    fgets(newAuthor, sizeof(newAuthor), stdin);
    newAuthor[strcspn(newAuthor, "\n")] = '\0';

   
    printf("Enter a new book price: ");
    scanf("%d", &newPrice);
    getchar();

    
    if (strlen(newTitle) > 0) {
        strcpy(booklib[arrIdx].title, newTitle);
    }

    
    if (strlen(newAuthor) > 0) {
        strcpy(booklib[arrIdx].author, newAuthor);
    }

    
    booklib[arrIdx].price = newPrice;

    printf("Updated Successfully\n");

   
    printf("[%d] Title: %s, Author: %s, Price: %d\n",
           index,
           booklib[arrIdx].title,
           booklib[arrIdx].author,
           booklib[arrIdx].price);
}



void saveAndExit(book *booklib) {
    FILE *fout = fopen("book_out.txt", "w");
    if (fout == NULL) {
        printf("Cannot create book_out.txt\n");
        return;
    }

    for (int i = 0; i < book_count; i++) {
        fprintf(fout, "%s,%s,%d\n",
                booklib[i].title,
                booklib[i].author,
                booklib[i].price);
    }

    fclose(fout);
    printf("%d Book Data Saved.\n", book_count);
    printf("Exit Program\n");
} 