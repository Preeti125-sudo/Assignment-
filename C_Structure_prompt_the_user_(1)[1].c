// C Structure to prompt the user
// author Ruth Williams 
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
printf("Enter the book title");
scanf("%s",book.title);
printf("Enter the book price");
scanf("%f",book.price);
printf("Enter the book author");
scanf("%s",book.author);
printf("Enter the book ISBN");
scanf("%s",book.ISBN);
printf("Enter the book publication_year");
scanf("%d",book.publication_year);

printf("title:%s\n",book.title);
printf("price:%.2f\n",book.price);
printf("author:%s\n",book.author);
printf("ISBN:%s\n",book.ISBN);
printf("publication_year%d\n",book.publication_year);
return 0;
}