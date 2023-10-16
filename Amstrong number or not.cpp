#include<stdio.h>
int main()
{
	int num,originalnum,remainder,result=0;
	printf("Enter a positive number:");
	scanf("%d",&num);
	originalnum=num;
	while(originalnum!=0)
	remainder=originalnum%10;
	originalnum/=10;
	if(result==num)
	printf("%d is an amstrong number",num);
	else
	printf("%d is not a amstrong",num);
	return 0;
}