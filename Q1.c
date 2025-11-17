#include <stdio.h>
#include <string.h>

int main()
{
    char pw[100];
    int upperCase=0, digit=0, specialChar=0, length;
    printf("Passowrd: ");
    scanf("%s", pw);
    
    length=strlen(pw);
    
    for(int i=0; i<length; i++){
        if(pw[i]>='A' && pw[i]<='Z'){
            upperCase=1;
            break;
        }
    }
    
    for(int i=0; i<length; i++){
        if(pw[i]>='0' && pw[i]<='9'){
            digit=1;
            break;
        }
    }
    
    for(int i=0; i<length; i++){
        if(pw[i]=='!' || pw[i]=='@' || pw[i]=='#' || pw[i]=='$' || pw[i]=='%'){
            specialChar=1;
            break;
        }
    }
    
    if(length>=8 && upperCase && digit && specialChar)
        printf("\nPassword validated!");
    else{
        printf("\nInvalid Password");
        if(length<8)
            printf("\nAt least 8 characters required");
        if(!upperCase)
            printf("\nAt least 1 uppercase letter required");
        if(!digit)
            printf("\nAt least 1 digit required");
        if(!specialChar)
            printf("\nAt least 1 special character required(!, @, #, $, %)");
    }
    
    return 0;
}
