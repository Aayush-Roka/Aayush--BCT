#include <stdio.h>

struct student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float averageMarks;
};


int displaystudentDetails(struct student st[], int size) {
    int i;
	for (i = 0; i < size; i++) {
        printf("Roll No: %d\n", st[i].rollNo);
        printf("Name: %s\n", st[i].name);
        printf("Address: %s\n", st[i].address);
        printf("Age: %d\n", st[i].age);
        printf("Average Marks: %.2f\n", st[i].averageMarks);
    }
}

int main() {
    struct student st[12];
    int i;

    for (i = 0; i < 12; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &st[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]", st[i].name);
        printf("Address: ");
        scanf(" %[^\n]", st[i].address);
        printf("Age: ");
        scanf("%d", &st[i].age);
        printf("Average Marks: ");
        scanf("%f", &st[i].averageMarks);
    }

    
    displaystudentDetails(st, 12);

    return 0;
}

