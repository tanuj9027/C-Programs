#include<stdio.h>
void main()
{
	int a[10],i,se=0,so=0;
	printf("enter 10 number to check sum of even and odd number");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
 	{
	if(a[i]%2==0)
	{
		se=se+a[i];
	}
	else
	{
		so=so+a[i];	
	}
	}
	printf("%d\n",so);
	printf("%d",se);


}
