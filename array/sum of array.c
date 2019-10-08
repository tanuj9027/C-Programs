#include<stdio.h>
void main()
{
	int a[5],i,sum=0;
	printf("enter 5 number");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=4;i++)
	 sum=sum+a[i];
	 
	 printf("sum=%d",sum);
}
