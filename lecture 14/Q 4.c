#include <stdio.h>
int main() 
{
    int row, col;
    printf("enter the array's row size:");
    scanf("%d", &row);
    printf("enter the array's column size:");
    scanf("%d", &col);
    int arr[row][col];
    printf("enter array's elements:\n");
    for(int i=0;i<row;i++)
     {
        for(int j=0;j<col;j++)
         {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int rownum,columnnum;
     printf("enter row number:");
    scanf("%d", &rownum);
     printf("elements of row %d:",rownum);
    for(int j=0;j<col;j++) 
    {
        printf("%d",arr[rownum][j]);
    }
    printf("\n");
    int rowsum=0;
    for(int j=0;j<col;j++)
     {
        rowsum+=arr[rownum][j];
     }
    printf("the sum of row %d: %d\n", rownum, rowsum);
     printf("\nenter column number:");
    scanf("%d", &columnnum);
    printf("the elements of column %d:",columnnum);
    for(int i=0;i<row;i++)
    {
        printf("%d",arr[i][columnnum]);
    }
    printf("\n");
    int columnsum =0;
    for(int i=0;i<row;i++) 
    {
        columnsum+=arr[i][columnnum];
    }
    printf("the sum of column %d:%d\n",columnnum,columnsum);
    return 0;
}