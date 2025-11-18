#include <stdio.h>

/*
  Program: Analyze annual examination results for 10 students and 3 subjects

  Input format (from standard input):
    - 10 lines, each containing: RollNo Subject1 Subject2 Subject3
      Example:
        1 78 85 92
        2 66 71 80
        ...

  Output:
    a) Total marks obtained by each student (RollNo and total)
    b) Highest marks in each subject and the RollNo of the student who secured it
    c) The student(s) who obtained the highest total marks (in case of ties)

  Build (Windows, using GCC):
    gcc -std=c11 -O2 -Wall -Wextra -o exam_results exam_results.c
*/

#define N_STUDENTS 10
#define N_SUBJECTS 3

int main(void) {
    int roll[N_STUDENTS];
    int marks[N_STUDENTS][N_SUBJECTS];
    int totals[N_STUDENTS] = {0};

    // Read input
    printf("Enter %d lines: RollNo S1 S2 S3\n", N_STUDENTS);
    for (int i = 0; i < N_STUDENTS; ++i) {
        if (scanf("%d %d %d %d", &roll[i], &marks[i][0], &marks[i][1], &marks[i][2]) != 4) {
            fprintf(stderr, "Invalid input at student %d. Expected: RollNo S1 S2 S3\n", i + 1);
            return 1;
        }
        totals[i] = marks[i][0] + marks[i][1] + marks[i][2];
    }

    // a) Total marks for each student
    printf("\n(a) Total marks by each student:\n");
    for (int i = 0; i < N_STUDENTS; ++i) {
        printf("Roll No %d: Total = %d\n", roll[i], totals[i]);
    }

    // b) Highest marks in each subject and Roll No
    int highest_subject[N_SUBJECTS];
    int highest_subject_roll[N_SUBJECTS];

    for (int s = 0; s < N_SUBJECTS; ++s) {
        highest_subject[s] = marks[0][s];
        highest_subject_roll[s] = roll[0];
        for (int i = 1; i < N_STUDENTS; ++i) {
            if (marks[i][s] > highest_subject[s]) {
                highest_subject[s] = marks[i][s];
                highest_subject_roll[s] = roll[i];
            }
        }
    }

    printf("\n(b) Highest marks in each subject:\n");
    for (int s = 0; s < N_SUBJECTS; ++s) {
        printf("Subject %d: Highest = %d (Roll No %d)\n", s + 1, highest_subject[s], highest_subject_roll[s]);
    }

    // c) Student(s) with highest total marks
    int highest_total = totals[0];
    for (int i = 1; i < N_STUDENTS; ++i) {
        if (totals[i] > highest_total) highest_total = totals[i];
    }

    printf("\n(c) Highest total marks: %d\n", highest_total);
    printf("Student(s) with highest total: ");
    int first = 1;
    for (int i = 0; i < N_STUDENTS; ++i) {
        if (totals[i] == highest_total) {
            if (!first) printf(", ");
            printf("Roll No %d", roll[i]);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
