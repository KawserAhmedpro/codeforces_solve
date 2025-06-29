#include<stdio.h>
#include<string.h>
int main()
{
    int i,k;
    char str[100];
    scanf("%s",str);
    k=strlen(str);
    for(i=0;i<k;i++){
    if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y') continue;
    printf(".%c",tolower(str[i]));
    }
    
    return 0;
}