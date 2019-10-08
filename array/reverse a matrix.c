#include<stdio.h>
void main()
{
	FILE *fp;
	int a[3][3],b[3][3],i,j;
	fp = freopen("in.txt", "rb", stdin);
	//fp = freopen("out.txt", "w+", stdout);
	//printf("enter 9 number");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=2;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		{
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
				printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	fclose(fp);
}
