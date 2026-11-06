#include <stdio.h>
int main () {
    float prelim, midterm, semifinal, finalGrade, average;
    printf("\n--- GRADE CALCULATOR ---\n");

                printf("Enter Prelim grade: ");
                scanf("%f", &prelim);

                printf("Enter Midterm grade: ");
                scanf("%f", &midterm);

                printf("Enter Semifinal grade: ");
                scanf("%f", &semifinal);

                printf("Enter Final grade: ");
                scanf("%f", &finalGrade);

                if (prelim < 1 || prelim > 5 ||
                    midterm < 1 || midterm > 5 ||
                    semifinal < 1 || semifinal > 5 ||
                    finalGrade < 1 || finalGrade > 5 )
                {
                    printf("Invalid grade. Enter grades from 1.00 to 5.00.\n");
                    return 1;
                }

                average = (prelim + midterm +
                           semifinal + finalGrade) / 5.0;

                printf("\nFinal Average: %.2f\n", average);

                if (average < 5.00)
                {
              printf("Status: PASS\n");
                }
              else
              {
             printf("Status: FAIL\n");
              }

              return 0;
}

   