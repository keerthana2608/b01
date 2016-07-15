#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
char *rev;
printf("\n enter the name");
scanf("%s",str);
rev=strrev(str);
printf("\n THE REVERSE STRING IS:%s",rev);
return 0;
}
