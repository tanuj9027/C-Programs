p#include<stdio.h>
void main()
{
	int a[10],i;
	printf("enter 10 number to check smallest number ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[0];
	for(i=0;i<=9;i++)
	{
		if(a[i]<min)
		 min=a[i];
	}
	printf("smallest number is%d",min);
	
}
