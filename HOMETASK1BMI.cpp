#include<stdio.h>
int main()
{
	float weight, height;
	double BMI;
	printf("Enter Weight (kg) : ");
	scanf("%f", &weight);
	printf("Enter height (m) : ");
	scanf("%f", &height);
	BMI=weight/(height*height);
	printf("BMI = %.2lf = category: ", BMI);
	if(BMI<18.5)
	{
		printf("\nUNDERWEIGHT");
	}
	else if(BMI>=18.5&&BMI<=24.9)
	{
		printf("\nNORMAL");
	}
	else if(BMI>=25&&BMI<=29.9)
	{
		printf("\nOVERWEIGHT");
	}
	else if(BMI>=30)
	{
		printf("\nOBESE");
	}
	return 0;

	
}
