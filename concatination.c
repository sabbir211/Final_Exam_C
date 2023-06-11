#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="hello";
    char str2[]="Buddy";
    char joint[50];
    int sizeOfStr=sizeof(str);
    for (int i=0;str[i]!='\0';i++)
    {
        joint[i]=str[i];
    }
    for (int i = 0; str2[i]!='\0'; i++)
    {
        joint[i+sizeOfStr-1]=str2[i];
    }
     joint[sizeOfStr + sizeof(str2) - 2] = '\0';
    
    puts(joint);
    return 0;
}