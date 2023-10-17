#include<stdio.h>
int main()
{
  int n,i,flag=0;
  printf("Enter a positive niumber :");
  scanf("%d",&n);
  if(n==0||n==1);
  flag=1;
  for(i=0;i<=n;++i)
  if(n%i==0)
  flag=1;
  if(flag==0)
  printf("%d is a prime number",n);
  else
  printf("%d is not a prime number",n);
  return 0;
}
