#include<stdio.h>
#include<string.h>
void main() {
   char str[100];
   printf("Enter the string:");
   gets(str);
   printf("String is:%s",str);
   printf("\nReverse String is : %s",strrev(str));
}