// C program to store Student records as Structures and Sort them by Name
// #include <stdio.h>
// #include <string.h>

// struct Student {
//     char name[50];
//     int rollNumber;
//     float marks;
// };

// void swap(struct Student *a, struct Student *b) {
//     struct Student temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void sortStudentsByName(struct Student students[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (strcmp(students[j].name, students[j + 1].name) > 0) {
//                 swap(&students[j], &students[j + 1]);
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     printf("Enter number of students: ");
//     scanf("%d", &n);
    
//     struct Student students[n];
    
//     for (int i = 0; i < n; i++) {
//         printf("\nEnter details for student %d:\n", i + 1);
//         printf("Name: ");
//         scanf(" %49[^"]", students[i].name); // Read string with spacesprintf("Roll Number: ");
//         scanf("%d", &students[i].rollNumber);
//         printf("Marks: ");
//         scanf("%f", &students[i].marks);
//     }
    
//     // Sorting students by name
//     sortStudentsByName(students, n);
    
//     // Display sorted student details
//     printf("\nStudent Records Sorted by Name:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%s\t%d\t%.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
//     }
    
//     return 0;
// }