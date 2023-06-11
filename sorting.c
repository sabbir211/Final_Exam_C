#include <stdio.h>
int main()
{
    // sorting maximum to minimum
    int arr[5] = {12, 3, 878, 10, 46};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 0; i < size; i++) // size er jaigai 5 dilew hobe
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}