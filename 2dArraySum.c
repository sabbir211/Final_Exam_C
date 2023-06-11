#include <stdio.h>
int main()
{
    int arr1[3][3] = {{5, 30, 7}, {3, 1, 5},{3,34,56}};
    int arr2[3][3] = {{1, 3, 8}, {3, 6, 5},{35,3,2}};
    int sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // printting sum array here
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t",sum[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}