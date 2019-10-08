#include<stdio.h>
struct distance
{
	int feet;
	float inch;
};
void main()
{
	struct distance d1,d2,sum;
	printf("enter the distance in feet\n");
	scanf("%d %d",&d1.feet,&d2.feet);
	printf("enter the daitance in inches \n");
	scanf("%f %f",&d1.inch,&d2.inch);
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	printf("\n");
	printf("%d %f",sum.feet,sum.inch);
	
	
}
