#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j<=i)
            {
                printf("%d",j);
            }
            else
            {
                printf("  ");
            }
        }
        for(int k=5;k>=1;k--)
        {
          if(k>i)
          {
            printf("  ");
          }
          else
          {
            printf("%d",k);
          }
        }
        printf("\n");
    }
    return 0;
}