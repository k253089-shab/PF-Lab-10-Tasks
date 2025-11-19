#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][20];
    int marks[5], totalMarks=0, max=0, index;
    float avg;
    for(int i=0; i<5; i++){
        printf("Enter name: ");
        scanf("%s", names[i]);
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
        totalMarks+=marks[i];
        if(marks[i]>max){
            max=marks[i];
            index=i;
        }
    }
    
    avg=(float)totalMarks/5;
    
    printf("\nStudent Marks:\nName\tMarks\n---------------------\n");
    
    for(int i=0; i<5; i++){
        printf("%s\t%d\n", names[i], marks[i]);
    }
    
    printf("\nHighest Scorer: %s with %d marks", names[index], marks[index]);
    printf("\nAverage marks: %.2f", avg);
    
    return 0;
}
