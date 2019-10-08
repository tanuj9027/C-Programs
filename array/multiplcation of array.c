#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum;
	printf("enter the number in frist array");
	for(i=0;i<=2;i++)
	{
	for(j=0;j<=2;j++)
	{
	scanf("%d",&a[i][j]);
	}
    }
	printf("enter the second number in second array");
	for(i=0;i<=2;i++)
	{
	 for(j=0;j<=2;j++)
	{
	 scanf("%d",&b[i][j]);
    }
}
    for(i=0;i<=2;i++)
    {
    	for(j=0;j<=2;j++)
    	{
    		sum=0;
    		for(k=0;k<=2;k++)
    		{
    			sum=sum+a[k][j]+b[i][k];
			}
			c[i][j]=sum;
		}
	}
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	 printf("%d  ",c[i][j]);
	 printf("\n");
	 
    
	}
	
