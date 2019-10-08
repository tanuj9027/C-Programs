#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("which table do u want");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		sum=n*i;
		printf("%d\n",sum);
	}
}
