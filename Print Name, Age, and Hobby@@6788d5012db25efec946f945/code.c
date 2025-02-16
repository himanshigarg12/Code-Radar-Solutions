// Your code here...
#include<stdio.h>
int main()
{
    char name[30];
    int age;
    char hobby[30];
    scanf("%s %d %s",name,&age,hobby);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
    return 0;
}