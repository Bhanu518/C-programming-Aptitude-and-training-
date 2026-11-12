#include <stdio.h>

int main()
 {
    char name;
    int marks;
    printf("   STUDENT RESULT ");
    printf("\nNAME OF THE STUDENT:");
    scanf("%s",&name);
    printf("\nSTUDENT MARKS:");
    scanf("%d",&marks);


    if(marks>=90)
    {
        printf("RESULT:Pass\n");
        printf("GRADE:A+");
    }
    else if(marks>=80)
    {
        printf("RESULT:Pass\n");
        printf("GRADE:A");
    }
        else if(marks>=70)
    {
        printf("RESULT:Pass\n");
        printf("GRADE:B");
    }

    
}