#include<stdio.h>
void main()
{
//void sum(void);
	sum();
	
}
void sum()
{
	int a,i,sum=0;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
