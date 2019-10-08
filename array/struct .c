#include<stdio.h>
#include<conio.h>
void main()
{
	struct book 
	{
		char name ;
		float price ;
		int page ;
	};
	struct book a1,a2,a3;
	printf("enter name ,price & pages of 3 books \n");
	scanf("%c%f%d",&a1.name,&a1.price,&a1.page);	
	scanf("%c%f%d",&a2.name,&a2.price,&a2.page);
	scanf("%c%f%d",&a1.name,&a2.price,&a3.page);
	printf("the valu u enter is ");
	printf("%c %f %d\n",a1.name,a2.price,a3.page);
	printf("%c %f %d\n",a2.name,a2.price,a2.page);
	printf("%c %f %d\n",a3.name,a3.price,a3.page);

}
