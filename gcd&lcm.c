#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,num2);
	int gcd=(num1,num2);
	int lcm=(num1,num2);
	printf("GCD %d",gcd);
	printf("LCM %d",lcm);
	return 0;
}
