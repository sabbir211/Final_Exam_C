#include <stdio.h>
int main()
{
    int arr[5] = {12, 3, 878, 3, 1046};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++) // size er jaigai 5 dilew hobe
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum value %d\n",max);
    printf("Minimum value %d",min);
    return 0;
}