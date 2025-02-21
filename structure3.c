#include<stdio.h>
struct book{
    char name[30];
    int pages;
    float price;
};
int main()
{
 struct book b,*bptr;
 printf("Enter book's name:\t");
 gets(b.name);
 printf("\n Number of pages: \t");
 scanf("%d",&b.pages);
 printf("\n Price of book: \t");
 scanf("%f",&b.price);
 bptr=&b;
 printf("\n The book information using pointer i.e arrow opertaor");
 printf("\n Book Name=%s\t Pages=%d\t Price=%.2f",bptr->name,bptr->pages,bptr->price);
 printf("\n The book information using pointer i.e * opertaor");
 printf("\n Book Name=%s\t Pages=%d\t Price=%.2f",(*bptr).name,(*bptr).pages,(*bptr).price);
 printf("\n The book information using structure variable i.e dot opertaor");
 printf("\n Book Name=%s\t Pages=%d\t Price=%.2f",b.name,b.pages,b.price);
 
 return 0;

}
