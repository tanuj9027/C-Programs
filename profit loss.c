#include<stdio.h>
void main()
{
	float cp,sp,profit,loss;
	printf("enter the cost price and selling price\n");
	scanf("%f%f",&cp,&sp);
	 if(cp>sp)
	 {
	 	loss=(cp-sp);
	 	printf("loss=%f",loss);
	 }
	 else
	 	 if(sp>cp)
	 {
	 	profit=(sp-cp);
	 	printf("profit=%f",profit);
	 }
}
