#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            
            if(i>=j)
            {
                printf("%d",i);
            }
            else
            {
                printf("*");
            }
        }
        printf("
");
        
    }
}