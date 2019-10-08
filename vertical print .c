#include<stdio.h>
void main()
{
	int a,r,x,z,y;
	printf("the 3 digit no is %d\n",a);
	scanf("%d",&a);
	r=a/100;
	printf("%d\n",r);
	x=a/10;
	z=x%10;
	printf("%d\n",z);
	y=a%10;
	printf("%d\n",y);
}
