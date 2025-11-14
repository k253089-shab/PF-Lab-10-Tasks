#include<stdio.h>
#include<string.h>

int main(){
	char str[5][10]={"hello", "world", "earth", "jupiter"};
	int i, j;
	for(i=0; i<=3; i++){
		puts(str[i]);
		for(j=0; j<=6; j++){
			if((str[i][j]!="\0")){
				printf("%c\n", str[i][j]);
			}
		}
	}
	return 0;
}
