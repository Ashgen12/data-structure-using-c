/* to find the length of string using strlen function */
#include<stdio.h>
#include<string.h>
void main()
{
  char str[100];
  int i;
  printf("Enter the string :");
  scanf("%s", str);
  printf("length of string is %d",strlen(str));
}
  