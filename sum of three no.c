#include<stdio.h>
void main()
{
	int a,r,x,y,z,o,j,sum;
	printf("the three digit no is ");
	scanf("%d",&a);
	r=a%10;
	x=a/10;
	y=x%10;
	z=x/10;
	o=z%10;
	j=z/10;
	sum=r+y+o;
	printf("the sum of digits are %d",sum);
}
