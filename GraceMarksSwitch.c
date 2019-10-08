#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the class obtined by student");
	scanf("%d",&a);
	printf("number of subject failed in");
	scanf("%d",&b);
	switch(a)
	{
		case 1:
			if(b>3)
				printf("not get any grace marks");
			else
				printf("grace marks will be 5 marks per subject%d",5*b);
			break;
		case 2:
			if(b>2)
				printf("not any grace");
			else
				printf("grace marks will be 4 per subject%d",4*b);
			break;
		case 3:
			if(b>1)
				printf("nor any grace");
			else
				printf("grace marks will be 5per subject%d",5*b);
			break;
	}
}
