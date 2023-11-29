#define TRUE 1
#define FALSE 0

typedef int bool

Bool ChkChar(char str, char ch)
{
   for(int i = 0; str[i] != '\0'; ++i)
   {
    if(str[i] == ch)
    {
        return 1;
    }
   }

}

int main()
{
    char arr[20];
    char cValue;
    Bool bRet = FALSE;

    printf("enter string");
    scanf("%[^'\n']s",arr);


    printf("enter character");
    scanf("%c",&cValue);

    bRet = ChkChar(arr,cValue);


    if(bRet == TRUE)
    {
        printf("character found");
    }

    else{
        printf("character not found");
    }

    return 0;
}