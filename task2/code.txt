#include <stdio.h>
#include <stdlib.h>

struct Books{
		int book_id;
		char title[20];
		char author[20];
		char subject[20];
};
void printBook(struct Books book){
	printf("\n\nBook ID: %d",book.book_id);
	printf("\nBook Title: %s",book.title);
	printf("\nBook Author: %s",book.author);
	printf("\nBook Subject: %s",book.subject);
}
void main(void){
	
	struct Books book1,book2;
	//book1 record
	book1.book_id = 1001;
	strcpy(book1.title,"C Programming");
	strcpy(book1.author,"David");
	strcpy(book1.subject,"Programming");
	//book2 record
	book2.book_id = 1002;
	strcpy(book2.title,"SQL Injections");
	strcpy(book2.author,"John");
	strcpy(book2.subject,"Hacking");
	
	//diplaying bookss;
	printBook(book1);
	printBook(book2);
	
}