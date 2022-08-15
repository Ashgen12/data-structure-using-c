#include <stdio.h>
 #include <string.h>
 int main() 
{ 
  char str1[100];
  printf("s1:");
  scanf("%s",str1);
  char str2[50];
  printf("s2:");
  scanf("%s",str2);
  strcat(str1, str2); 
  puts(str1); 
  puts(str2); 
  return 0;
 }


