#include<stdio.h>
#include<string.h>
int main ()
{

    char str1[100];
    printf("str1:");
    scanf("%s",str1);

    char str2[100];
    printf("str2:");
    scanf("%s",str2);

    char str3[40];

    char str4[40];

    char str5[100];
    printf("str5:");
    scanf("%s",str5);

     

    strcpy(str2, str1);

    strcpy(str3, "Copy successful");

    strcpy(str4, str5);

    printf ("str1: %s\nstr2: %s\nstr3: %s\nstr4: %s\n", str1, str2, str3, str4);

    return 0;
}