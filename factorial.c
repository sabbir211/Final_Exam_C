#include <stdio.h>

int main() {
    // factorial here
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
int factorial=1;
for(int i=1;i<=n;i++)
{
    factorial=factorial*i;
}
printf("factorial:%d",factorial);
    return 0;
}