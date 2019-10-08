#include<stdio.h>
void main()
{
	int a[10],i,min=10,max=min+9,t,j;
	srand();
	for(i=0;i<=9;i++)
	{
		t=rand()%10+min;
	for(j=0;j<=i-1;i++)
	{
		if(t==a[j])
		break;
	}}
	if(i==j)
	{
		a[i]=t;
	}
	else
	{
		i--;
	}
	for(i=0;i<=9;i++)
	{
		printf("%d",a[i]);
	}
}
