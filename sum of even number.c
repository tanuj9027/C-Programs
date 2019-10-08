#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter no to be factorial\n");
	scanf("%d",&n);
	for(i=2;i<=2*n;i=i+2)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
