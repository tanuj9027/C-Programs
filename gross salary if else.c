# include<stdio.h>
void main()
{
	float basic,hra ,da,gs; 
	printf("enter basic salary\n");
	scanf("%f",&basic);
	if(basic<1500)
    {
	hra=((10/100)*basic);
	da=((90/100)*basic);
    }
    else
	{
		hra=500;
		da=((98/100)*basic);
	}
	gs=basic+hra+da;
	printf("gross salary=%f",gs);
}
