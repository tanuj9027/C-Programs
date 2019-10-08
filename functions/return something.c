#include<stdio.h>
void main()
{
	int add();
	int s;
	s=add();
	printf("%d",s);
	
}
int add()
{
	int a,b,c;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c; 
}
