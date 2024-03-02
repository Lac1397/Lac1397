#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=5;j++)
        {
            if(j<i)
            {
                printf("  ");
            }
            else
            {
               printf("%d ",j);
            }
        }
        for(int k=4;k>=1;k--)
        {
            if(k<i)
            {
                printf("  ");
            }
            else
            {
               printf("%d ",k);
            }
        }
        printf("\n");
    }
    return 0;
}