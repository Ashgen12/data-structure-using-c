/* to find the length of string using without strlen function */
#include<stdio.h>
#include<string.h>
void main()
{
  char str[100];
  int i;
  printf("Enter the string :");
  scanf("%s", str);
  for(i=0;str[i]!='\0';++i);
  printf("length of string is %d",i);
}
  