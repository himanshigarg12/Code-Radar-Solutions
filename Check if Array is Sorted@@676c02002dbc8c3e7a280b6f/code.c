#include<stdio.h>
int main()
{
    int N,i;
    int flag=0;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(a[i]>=a[i+1])
        { 
          flag=0;  
        }
        else
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Sorted");
    } 
    else
    {
        printf("Not Sorted");
    }   
}