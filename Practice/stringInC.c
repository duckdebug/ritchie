// Usng Strings in c
#include<stdio.h>
// Declarations
void character(char a);
void word (char w[]);
void sentence(char s[]);
int main()
{
  // Alphabet
  char a;
  char w[10];
  char s[30];
  scanf("%c",&a);
  scanf("%s",&w);
  scanf("\n%[^\n]%*c",&s);
  // Invocations
  character(a);
  word(w);
  sentence(s);
  return 0;
}
// Definitions
void character(char a){
  printf("%c\n",a);
}
void word (char w[]){
  printf("%s\n",w);
}
void sentence(char s[]){
  printf("%s",s);
}
// Format Specifier for Sentence : \n%[^\n]%*c
