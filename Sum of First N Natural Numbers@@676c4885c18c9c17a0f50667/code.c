#include<stdio.h>
int main()
{
    int N,i=1,sum=0;
    scanf("%d",&N);
    while(i<=N)
    {
       sum = sum+i;
       i=i+1;
    }
    printf("%d",sum);
return 0;
}    