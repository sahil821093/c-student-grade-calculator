#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float percentage;

    printf("=== Student Grade Calculator ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for Subject %d (out of 100): ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;

    printf("\nTotal Marks: %d / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 80) {
        printf("Grade      : A\n");
    } else if (percentage >= 60) {
        printf("Grade      : B\n");
    } else if (percentage >= 40) {
        printf("Grade      : C\n");
    } else {
        printf("Grade      : Fail\n");
    }

    return 0;
}
