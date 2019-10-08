#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],i,j;
	printf("enter 9 number");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			b[i][j]=a[i][j];
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
