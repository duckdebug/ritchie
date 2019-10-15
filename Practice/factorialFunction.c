// Factorial of a number using funciton 
#include<stdio.h>
int factorial(int n);// Declaration
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d\n",factorial(n));
  return 0;
}
// Definition
int factorial(int n){
  int fact = 1;
  if(n==0)
    printf("%d\n",1);
  else{
    for(int i = n;i>0;i--){
      fact = fact *i;
    }
  }
  return fact;
}
