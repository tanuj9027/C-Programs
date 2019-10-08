#include<stdio.h>
void main()
{
	int a[5],b[5],c[10],i,j;
	printf("enter 5 the number");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter 5 the number");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=4;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<5;j++)
	{
		c[i]=b[j];
	}
	for(i=0;i<=9;i++)
	{
 		printf("%d ",c[i]);
    }
}
