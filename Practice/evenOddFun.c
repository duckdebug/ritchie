//Check number is even or odd using function.
#include<stdio.h>
//Declaration
//Params :n
void evenOdd(int n);
int main()
{
  int n;
  scanf("%d",&n);
  evenOdd(n);// Calling
  return 0;
}
//Definition
void evenOdd(int n){
  if(n%2 == 0)
    printf("Even");
  else
    printf("Odd");
}
