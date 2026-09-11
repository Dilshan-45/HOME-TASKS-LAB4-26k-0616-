#include<stdio.h>
int main()
{
    int side1, side2, side3;
	printf("Enter three sides: ");
	scanf("%d %d %d", &side1, &side2, &side3);
	if(side1+side2>side3&&side2+side3>side1&&side1+side3>side2)
	{
		printf("Valid triangle\n type: ");
		if(side1==side2&&side2==side3)
		{
			printf("equilateral");
		}
		else if("side1==side2||side1==side3||side2==side3")
		{
			printf("isosceles");
		}
		else 
		{
			printf("scalene");
		}
		
	}
	else {
		printf("INVALID TRIANGLE");
	}
	return 0;
}
