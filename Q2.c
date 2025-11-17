#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    int i, length;
    printf("Enter email addres: ");
    scanf("%s", email);
    
    length=strlen(email);
    
    for(i=0; i<length; i++){
        if(email[i]=='@')
        break;
    }
    
    if (i == length) {
        printf("\nInvalid email!");
        return 0;
    }
    
    printf("Domain: ");
    for(int j=i+1; j<length; j++){
        printf("%c", email[j]);
    }

    return 0;
}
