#include<stdio.h>
#include<string.h>
int main()
{
    int i,f=0,value;
    char s[100];
    char t[100];
    scanf("%s",s);
    scanf("%s",t);
     strrev(s);
     value = strcmp(s,t);
     if(value==0)
     {
        printf("YES");

     }
     else
     printf("NO");
     return 0;
}