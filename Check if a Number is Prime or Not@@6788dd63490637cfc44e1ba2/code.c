#include<stdio.h>
int main()
{
    int n;
    int i=2;
    int flag=0;
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            flag=1;
            printf("Not Prime");
            break;
        }
        i=i+1;
    }
    if(flag==0)
    {
        printf("Prime");
    }
}