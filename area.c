# include<stdio.h>
void main()
{
	int length,breadth,radius;
	float area,perimeter;
	printf("enter the length,breadth,and radius\n");
	scanf("%d%d%d",&length,&breadth,&radius);
	area=(length*breadth);
	perimeter=(2*(length*breadth));
	printf("the area of rectangle are=%f",area);
	printf("the perimeter of rectangle are=%f",perimeter);
}
