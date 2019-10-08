#include<stdio.h>
void main()
{
	float salary,p,q,grosssalary;
	printf("enter the salary of a person\n");
	scanf("%f",&salary);
	p=(0.4*salary);
	q=(0.2*salary);
	grosssalary=(salary-(p+q));
	printf("the gross salary is=%f",grosssalary);
}

