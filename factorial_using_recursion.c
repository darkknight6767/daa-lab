#include<stdio.h>

int factorial(num)
{
  if(num==0) return 1;
  return num*factorial(num-1);
}

int main()
{
int num;
printf("Enter number: ");
scanf("%d",&num);
printf("the factorial of %d is %d",num,factorial(num));
}
