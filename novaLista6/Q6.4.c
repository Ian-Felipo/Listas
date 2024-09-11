# include <stdio.h>
# include <stdlib.h>
# include <time.h>

typedef struct {
    float grade_1;
    float grade_2;
    float average;
} student;

typedef struct {
    student *ptr;
    unsigned size;
    double average;
} class;

float generateRandomFloat(float, float);

void generateRandomStudentGrades(student *, float, float);

void calculateStudentAverage(student *);

void createStudent(student *, float, float);

void allocateClass(class *);

void createStudents(class *, float, float);

void calculateClassAverage(class *);

void createClass(class *, unsigned, float, float);

void printStudent(student *);

void printClass(class *);

int main(int argc, char *argv[]) {
    char *endptr;
    class x;

    if (argc != 4) { abort(); }

    srand(time(NULL));

    createClass(&x, strtoul(*(argv + 1), &endptr, 10), atof(*(argv + 2)), atof(*(argv + 3)));

    printClass(&x);

    return 0;
}

float generateRandomFloat(float min, float max) {
    return min + (rand() / (float) RAND_MAX) * (max - min);
}

void generateRandomStudentGrades(student *x, float lowestGrade, float highestGrade) {
    x->grade_1 = generateRandomFloat(lowestGrade, highestGrade);
    x->grade_2 = generateRandomFloat(lowestGrade, highestGrade);
}

void calculateStudentAverage(student *x) {
    x->average = (x->grade_1 + x->grade_2) / 2;
}

void createStudent(student *x, float lowestGrade, float highestGrade) {
    generateRandomStudentGrades(x, lowestGrade, highestGrade);
    calculateStudentAverage(x);
}

void allocateClass(class *x) {
    if (!(x->ptr = (student *) malloc(x->size * sizeof(student)))) { abort(); }
}

void createStudents(class *x, float lowestGrade, float highestGrade) {
    for (register unsigned i = 0; i < x->size; i++) {
        createStudent(x->ptr + i, lowestGrade, highestGrade);
    }
}

void calculateClassAverage(class *x) {
    x->average = 0;

    for (register unsigned i = 0; i < x->size; i++) {
        x->average += (x->ptr + i)->average;
    }

    x->average /= x->size;
}

void createClass(class *x, unsigned size, float lowestGrade, float highestGrade) {
    x->size = size;
    allocateClass(x);
    createStudents(x, lowestGrade, highestGrade);
    calculateClassAverage(x);
}

void printStudent(student *x) {
    printf("\n\n1° Grade: %.2f\n", x->grade_1);
    printf("\n2° Grade: %.2f\n", x->grade_2);
    printf("\nAverage: %.2f\n\n", x->average);
}

void printClass(class *x) {
    printf("\n===================================================");

    for (register unsigned i = 0; i < x->size; i++) {
        printStudent(x->ptr + i);
        printf("===================================================");
    }

    printf("\n\nClass Average: %.2f\n", x->average);
}