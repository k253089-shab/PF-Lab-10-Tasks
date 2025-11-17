#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length, vowels=0, consonants=0, digits=0, spaces=0;
    printf("Text: ");
    fgets(str, sizeof(str), stdin);
    length=strlen(str);
    
    for(int i=0; i<length; i++){
        
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='a')
            vowels++;
        else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            consonants++;
        else if(str[i]>='0' && str[i]<='9')
            digits++;
        else if(str[i]==' ')
            spaces++;
    }
    
    printf("---Statistics---\nVowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\nTotal characters: %d", vowels, consonants, digits, spaces, length);
    
    return 0;
}
