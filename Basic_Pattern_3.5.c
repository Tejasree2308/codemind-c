#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    scanf("%d",&n);
    k=n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
                printf("%c ",j+64);
        }
        printf("
");
    }
}