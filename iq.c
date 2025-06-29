#include<stdio.h>

int main()
 {  
    int a, i,j=0,b=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            j++;
        }
        else{
            b++;
        }

    }
   
    if(j>b)
    {
        for(i=0;i<a;i++)
        {
            if(arr[i]%2!=0)
            {
                printf("%d",i+1);
                break;
            }
        }
    }

    if(b>j)
    {
        for(i=0;i<a;i++)
        {
            if(arr[i]%2==0)
            {
                printf("%d",i+1);
                break;
            }
        }
    }


 return 0;
}