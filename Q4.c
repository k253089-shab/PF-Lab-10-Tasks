#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], vwu[100];
    printf("Text: ");
    fgets(str, sizeof(str), stdin);
    int length=strlen(str);
    
    for(int i=0; i<length; i++){
        if((str[i]>='A' && str[i]<='W') || (str[i]>='a' && str[i]<='w'))
            vwu[i]=str[i]+3;
        else if((str[i]>='X' && str[i]<='Z') || (str[i]>='x' && str[i]<='z'))
            vwu[i]=str[i]-23;
        else
            vwu[i]=str[i];
    }
    
    vwu[length]='\0';
    printf("\nEncrypted: %s\nDecrypted: %s", vwu, str);
    
    return 0;
}
