#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the 3 side of a triangle ");
	scanf("%d%d%d",&a,&b,&c);
	if(((a+b)>c)||((a+c)>b)||((b+c>a)))
	printf(" it is valid ");
    else
    printf("it is not valid");
}
