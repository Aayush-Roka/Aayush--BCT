#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float marksPhysics;
    float marksC;
    float marksMath;
    float averageMarks;
};
void readAndDisplayStudent(struct Student* student) {
    printf("Roll Number: ");
    scanf("%d", &student->rollNo);

    printf("Name: ");
    scanf("%s", student->name);

    printf("Address: ");
    scanf("%s", student->address);

    printf("Age: ");
    scanf("%d", &student->age);

    printf("Marks in Physics: ");
    scanf("%f", &student->marksPhysics);

    printf("Marks in C: ");
    scanf("%f", &student->marksC);

    printf("Marks in Math: ");
    scanf("%f", &student->marksMath);
    student->averageMarks = (student->marksPhysics + student->marksC + student->marksMath) / 3;
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student->rollNo);
    printf("Name: %s\n", student->name);
    printf("Address: %s\n", student->address);
    printf("Age: %d\n", student->age);
    printf("Marks in Physics: %.2f\n", student->marksPhysics);
    printf("Marks in C: %.2f\n", student->marksC);
    printf("Marks in Math: %.2f\n", student->marksMath);
    printf("Average Marks: %.2f\n", student->averageMarks);
    printf("\n");
}

int main() {
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        readAndDisplayStudent(&students[i]);
    }

    return 0;
}
