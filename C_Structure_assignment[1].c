// C Structure 
// Author-Ruth Williams 
// Date 19/10/2024
#include <stdio.h>
#include <string.h>
struct book{
char title[30];
float price;
char ISBN[13];
char author[30];
int publication_year;
}book;
int main(){
strcpy(book.title,"introduction to C programming");
book.price=49.99;
strcpy(book.author,"John Smith");
strcpy(book.ISBN,"9708126789126");
book.publication_year=2022;
printf("title:%s\n",book.title);
printf("price:%.2f\n",book.price);
printf("author:%s\n",book.author);
printf("ISBN:%s\n",book.ISBN);
printf("publication_year%d\n",book.publication_year);
return 0;
}