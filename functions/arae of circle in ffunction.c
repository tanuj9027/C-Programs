#include<stdio.h>
void main()
{
	int area(int);
	int a,s;
	printf("enter the value ");
	scanf("%d",&a);
	s=area(a);
	printf("%d",s);
}
int area(int r)
{
	int area;
	area=22.7*(r*r);
	return area;
}
