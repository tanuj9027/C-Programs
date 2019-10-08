#include<stdio.h>
void main()
{
	int a[10],i,max;
	printf("enter the number in array");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);	
	}
	max=a[0];
	for(i=0;i<=9;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	printf("max number is %d",max);
	
}
