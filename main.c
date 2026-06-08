#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Index Number = AS20250541

int main()
{
    int mathMarks = 0;
    int scienceMarks = 0;
    int englishMarks = 0;

    //Getting user inputs

    printf("Enter your mathematics marks: ");
    scanf("%d",&mathMarks);

    printf("Enter your sciencec marks: ");
    scanf("%d",&scienceMarks);

    printf("Enter your english marks: ");
    scanf("%d",&englishMarks);

    //Calculating Total and Average

    int Total = mathMarks + scienceMarks + englishMarks;
    float Average = Total/3.0;

    //Grading
    char Grade = '\0';

    if(Average>=80 && Average <= 100){
        Grade = 'A';
    }
    else if (Average>=70 && Average <=79){
        Grade = 'B';
    }
    else if (Average>=60 && Average<=69){
        Grade = 'C';
    }
    else if (Average>=50 && Average<=59){
        Grade = 'D';
    }
    else if (Average < 50){
        Grade = 'F';
    }


    // PASS/FAIL condition
    char Result[5];

    if(mathMarks<40 || scienceMarks<40|| englishMarks<40){
        strcpy(Result,"FAIL");
    }
    else{
        strcpy(Result,"PASS");
    }

    //giving the Output

    printf("Total  : %d\n",Total);
    printf("Average: %.2f\n",Average);
    printf("Grade  : %c\n",Grade);
    printf("Result : %s",Result);











}
