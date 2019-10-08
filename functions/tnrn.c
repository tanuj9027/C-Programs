#include<stdio.h>
void main()
{
void sum();
	sum();
}
void sum()
{
	int a,i,s=0;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		s=s+i;
	}
	printf("%d",s);
}
