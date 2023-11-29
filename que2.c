
#include<stdio.h>


int CountChar(char *str, char ch)
{
    int frequency;
   for(int i = 0; str[i] != '\0'; ++i)
   {
    if(str[i] == ch)
    {
        ++frequency;
    }
   }
  return frequency;
}

int main()
{
    char arr[20];
    char cValue;
     int iRet = 0;

    printf("enter string");
    scanf("%[^'\n']s",arr);


    printf("enter character");
    scanf("%c",&cValue);

 iRet = CountChar(arr,cValue);



    return 0;
}