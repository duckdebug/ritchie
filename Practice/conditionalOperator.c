// Use of conditional Operator
// WAP to tell number is even or off, Print E for Even O for Odd uiing a function
#include<stdio.h>
char oddEven(int n);
int main()
{
  int n;
  scanf("%d",&n);
  printf("%c\n",oddEven(n));
  return 0;
}
char oddEven(int n){
  return n % 2 == 0 ? 'E' : 'O';
}
/*
n % 2 == 0     ?     'E'     :     'O'
condition      ?     true    :     false
*/
