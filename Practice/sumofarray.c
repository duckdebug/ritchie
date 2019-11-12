//Sum of Array
#include<stdio.h>
int main ()
{
  int i, sum = 0;
  int a[6] = {10,11,12,13,14,15};
  int len = sizeof(a)/sizeof(int);
  for(i=0;i<len;i++) {
    sum = sum + a[i];
  }
  printf("%d\n", sum);
}
