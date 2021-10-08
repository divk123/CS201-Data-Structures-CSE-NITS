#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter the order of 2D matrix (row & col)\n");
    scanf("%d %d",&r,&c);
    int arr1[r][c];
    printf("Enter the 2D array\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            scanf("%d",&arr1[i][j]);
    }
    int n=r*c;
    int arr2[n];
    int k=0;
    printf("Inital 2D Array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d ",arr1[i][j]);
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr2[k]=arr1[i][j];
            k++;
        }
    }
    printf("\nFinal 1D array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr2[i]);
}
