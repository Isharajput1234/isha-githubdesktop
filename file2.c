#include<stdio.h>
int main()
{
    int a[3][3],i,j,key;
    for(i=0;i<3;i++)
   
    for(j=0;j<3;j++)
    {
        printf("\nenter the value for 2d array");
        scanf("%d",&a[i][j]);
        
    }
    
printf("\n2d array element are");
for(i=0;j=3;i++)
{
    printf("\n");
    for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);
}
printf("\nenter number to search");
scanf("%d",&key);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
    if(a[i][j]==key)
    {
        printf("\nelement found at a[%d][%d] position",i,j);
        return (0);

    }
}
   {
        printf("\nelement not found");
    }

return (0);
}