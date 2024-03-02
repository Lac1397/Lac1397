#include <stdio.h>

int main() {
    int row,col;
     printf("enter the array's row size: ");
    scanf("%d", &row);
    printf("enter the array's column size: ");
    scanf("%d", &col);
    int arr[row][col];
    printf("enter array's elements:\n");
    for (int i =0;i<row;i++)
    {
        for (int j=0;j<col;j++) 
       {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int largest = arr[0][0];
     for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++) 
         {
            if (arr[i][j]>largest) 
             {
                largest=arr[i][j];
             }
        }
    }
    printf("The largest element is: %d\n", largest);
    return 0;
}
