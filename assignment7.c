#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        
        printf("Name: ");
        scanf("%s", s[i].name); 
        
        printf("Marks (out of 100): ");
        scanf("%f", &s[i].marks);
    }
    printf("\n--- Student Results ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nRoll No: %d | Name: %s | Marks: %.2f | Result: ", 
               s[i].rollNo, s[i].name, s[i].marks);
        
        if (s[i].marks >= 40.0) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}
