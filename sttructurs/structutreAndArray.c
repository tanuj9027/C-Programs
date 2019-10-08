#include<stdio.h>
#define size 2
struct baby
{
	int roll;
	char name[30];
	
};

void main()
{
	struct baby array[size] ;
	int i;
	for (i=0;i<size;i++)
	{
		printf("enter the u need to insert in array ");
		scanf("%d",&array[i].roll);
		gets(array[i].name);
}
for (i=0;i<size;i++)
{
	printf("%d %s",array[i].roll,array[i].name);
}

	
}
