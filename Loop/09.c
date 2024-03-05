#include<stdio.h>

void main() {
    float N;
    scanf("%f", &N);

    for (int i = 1; i <= N; i++) {
        float A, HW, CT, MT, TF, mark;
        scanf("%f %f %f %f %f", &A, &HW, &CT, &MT, &TF);

        mark = A + HW + CT + (MT*0.6) + (TF*0.4); // MT = 50 (total mark)
						  // 50 * x = 30 (converting to 30);
						  // x = 0.6; multiply 'x' with the obtained mark to convert to 30;

    if(mark>= 90 && mark<=100)
        printf("Student %d: A\n", i);
    else if(mark >= 86)
        printf("Student %d: A-\n", i);
    else if(mark >= 82)
        printf("Student %d: B+\n", i);
    else if(mark >= 78)
        printf("Student %d: B\n", i);
    else if(mark >= 74)
        printf("Student %d: B-\n", i);
    else if(mark >= 70)
        printf("Student %d: C+\n", i);
    else if(mark >= 66)
        printf("Student %d: C\n", i);
    else if(mark >= 62)
        printf("Student %d: C-\n", i);
    else if(mark >= 58)
        printf("Student %d: D+\n", i);
    else if(mark >= 55)
        printf("Student %d: D\n", i);
    else if(mark < 55)
        printf("Student %d: F\n", i);

    }
        
}