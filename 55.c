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

int main() {
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i+1);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Address: ");
        scanf("%s", students[i].address);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks in Physics: ");
        scanf("%f", &students[i].marksPhysics);

        printf("Marks in C: ");
        scanf("%f", &students[i].marksC);

        printf("Marks in Math: ");
        scanf("%f", &students[i].marksMath);

        // Calculate average marks
        students[i].averageMarks = (students[i].marksPhysics + students[i].marksC + students[i].marksMath) / 3;
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Marks in Physics: %.2f\n", students[i].marksPhysics);
        printf("Marks in C: %.2f\n", students[i].marksC);
        printf("Marks in Math: %.2f\n", students[i].marksMath);
        printf("Average Marks: %.2f\n", students[i].averageMarks);
        printf("\n");
    }

    return 0;
}
