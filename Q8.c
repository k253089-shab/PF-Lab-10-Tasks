#include<stdio.h>
#include<string.h>

int main(){
    char cat[3][20]={"Appetizers","MainCourse","Desserts"};
    char items[3][3][20]={
        {"Soup","Salad","Fries"},
        {"Burger","Steak","Pasta"},
        {"Cake","Pie","Icecream"}
    };
    float price[3][3]={
        {5.5,7.0,4.0},
        {12.0,18.5,9.5},
        {6.0,8.0,11.0}
    };
    int i=0;
    int j=0;
    printf("Full Menu:\n");
    for(i=0;i<3;i++){
        printf("%s:\n",cat[i]);
        for(j=0;j<3;j++){
            printf("%-10s $%.2f\n",items[i][j],price[i][j]);
        }
        printf("\n");
    }
    printf("Budget-Friendly Items (Under $10):\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(price[i][j]<10){
                printf("%-10s %-10s $%.2f\n",cat[i],items[i][j],price[i][j]);
            }
        }
    }
    return 0;
}