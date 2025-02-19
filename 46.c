#include <stdio.h>
#include <string.h>
struct student {
    char name[50];
    char address[100];
    int id;
};
// Function to sort students based on their names
void sortStudents(struct student students[], int n) {
    struct student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("ID: ");
        scanf("%d", &students[i].id);
    }
    sortStudents(students,n);
    printf("\nSorted student information:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Address: %s, ID: %d\n", students[i].name, students[i].address, students[i].id);
    }
    return 0;
}


