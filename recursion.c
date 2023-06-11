#include <stdio.h>
int fact(int n)
{
    if(n<=0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main() {
    // factorial in recursive way
  int n;
  printf("enter:");
  scanf("%d",&n);
    int factorial=fact(n);
    printf("%d",factorial);

    return 0;
}