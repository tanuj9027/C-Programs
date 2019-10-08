#include<stdio.h>
void main()
{
	int a[10],i;
	printf("enter 10 number to greatest number");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(i=0;i<=9;i++);
	{
		if(a[i]>max)
		{
	     a[i]=max;
		}
	}
	printf("maximum number is%d",a[i]);
}
