//to check no is pallindrome
#include<stdio.h>
#include<string.h>
int main()
{
    int l,i=0,j,f=0;
    char s1[20];
    printf("input a string");
    fget(s1,20,stdin);
    l=strlen(s1);
    for(i=0,j=l-1;i<j;i++,j++)
    {
        if(s1[i]!=s1[j])
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("pallindrome");

    }
    else{
        printf("not pallindrome");
    }
    return 0;
}