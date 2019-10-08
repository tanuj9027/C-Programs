#include<stdio.h>
void main()
{
	int a[10][10],i,j,n;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter the arry element");
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(i==j)
    		printf("%d",a[i][j]);
    		else
    		printf(" ");
    		}
    		printf("\n");
	}
	
	
}
