#include<stdio.h>
struct student
{
	char name[20];
	int roll;
	
};
void display(struct student a2)
{
	printf("%s\n",a2.name);
	printf("%d",a2.roll);
	
}
void main()
{
	struct student a1;
	printf("enter the ame of student");
	gets(a1.name);
	printf("enter the rool number of a student");
	scanf("%d",&a1.roll);
	display(a1);
	
}
