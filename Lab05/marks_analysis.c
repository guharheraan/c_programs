#include <stdio.h>

/*
  Analyze student marks and count students in different categories.

  Input (stdin):
    Number of students, then marks for each student (0-100)

  Output (stdout):
    Count of students in various mark ranges:
      a. More than 80 marks
      b. More than 60 marks
      c. More than 40 marks
      d. 40 or less marks
      e. Range 81-100
      f. Range 61-80
      g. Range 41-60
      h. Range 0-40

  Uses minimum number of if statements by utilizing nested conditions.

  Example
    In:
      5
      85 75 45 35 95
    Out:
      a. More than 80: 2
      b. More than 60: 4
      c. More than 40: 4
      d. 40 or less: 1
      e. Range 81-100: 2
      f. Range 61-80: 2
      g. Range 41-60: 1
      h. Range 0-40: 1
*/

int main(void) {
    int n;
    int count_gt80 = 0, count_gt60 = 0, count_gt40 = 0, count_le40 = 0;
    int count_81_100 = 0, count_61_80 = 0, count_41_60 = 0, count_0_40 = 0;

    // Read number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks for %d students: ", n);

    // Read marks and categorize using minimum if statements
    for (int i = 0; i < n; ++i) {
        int marks;
        scanf("%d", &marks);

        // Use nested if to minimize number of conditions
        if (marks > 80) {
            count_gt80++;
            count_gt60++;
            count_gt40++;
            count_81_100++;
        } else if (marks > 60) {
            count_gt60++;
            count_gt40++;
            count_61_80++;
        } else if (marks > 40) {
            count_gt40++;
            count_41_60++;
        } else {
            count_le40++;
            count_0_40++;
        }
    }

    // Display results
    printf("\n===== Mark Analysis =====\n");
    printf("a. More than 80 marks: %d\n", count_gt80);
    printf("b. More than 60 marks: %d\n", count_gt60);
    printf("c. More than 40 marks: %d\n", count_gt40);
    printf("d. 40 or less marks: %d\n", count_le40);
    printf("\n===== Range Analysis =====\n");
    printf("e. Range 81-100: %d\n", count_81_100);
    printf("f. Range 61-80: %d\n", count_61_80);
    printf("g. Range 41-60: %d\n", count_41_60);
    printf("h. Range 0-40: %d\n", count_0_40);

    return 0;
}
