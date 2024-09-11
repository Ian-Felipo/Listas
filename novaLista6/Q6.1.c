# include <stdio.h>
# include <stdlib.h>

typedef struct {
    float grade_1;
    float grade_2;
    float average;
} student;

void calculateAverage(student *);

int main(int argc, char *argv[]) {
    student x;

    if (argc != 3) { abort(); }

    x.grade_1 = atof(*(argv + 1));
    x.grade_2 = atof(*(argv + 2));
    calculateAverage(&x);

    printf("\nAverage: %.2f\n", x.average);

    return 0;
}

void calculateAverage(student *x) {
    x->average = (x->grade_1 + x->grade_2) / 2;
}

