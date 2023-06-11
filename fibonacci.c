#include <stdio.h>

int main() {
    // fibonacci
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   int secondLast=0;
   int last=1;
   int temp;
   for(int i=0;i<n; i++)
{
    printf("%d\n",last);
  temp=last;
    last=secondLast+last;
    secondLast=temp;
}
    return 0;
}