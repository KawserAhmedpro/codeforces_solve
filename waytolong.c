#include<stdio.h>
int main()
{
   int n,i,len;
   scanf("%d",&n);
   char str[200];
   for(i=0;i<n;i++)
   {
    scanf("%s",str);
    len=strlen(str);
    if(len>10)
    {
        printf("%c",str[0]);
        printf("%d",str[len-2]);
        printf("%c",str[len-1]);

    }
    else
    printf("%S\n",str);
   } 
   return 0;
}