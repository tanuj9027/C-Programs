/*  *******
     *****
      ***
       *
*/




#include<stdio.h>
int main()
{
	int i,j,k,x=97;
	for(i=5;i>=1;i--)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",x++);
		}
	
		printf("\n");
	}
   }
