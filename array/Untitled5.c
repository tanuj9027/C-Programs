#include<stdio.h>
#include<string.h>
	struct book
	{
		char name[50];
		char writer[50];
		char subject[200];
		int id ;
		
	};

int main()
{
	struct book b1,b2;
	
	strcpy(b1.name,"c");
	strcpy(b1.writer,"tanuj");
	strcpy(b1.subject,"computer");
	b1.id=102300;
	
   printf( "Book 1 title : %s\n", b1.name);
   printf( "Book 1 author : %s\n", b1.writer);
   printf( "Book 1 subject : %s\n", b1.subject);
   printf( "Book 1 book_id : %d\n", b1.id);

}
