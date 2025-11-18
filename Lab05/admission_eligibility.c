#include <stdio.h>
#include <string.h>

/*
  Check admission eligibility to a professional course based on marks.

  Admission conditions (ALL must be satisfied):
    a. Marks in mathematics >= 60
    b. Marks in physics >= 50
    c. Marks in chemistry >= 40
    d. Total in all three subjects >= 200
    AND (e OR f):
      e. Total in mathematics and physics >= 150
      OR
      f. Total in mathematics and physics >= 150

  Input (stdin):
    marks in mathematics, physics, chemistry

  Output (stdout):
    "ELIGIBLE" or "NOT ELIGIBLE" with reason

  Example
    In:
      70 60 50
    Out:
      ELIGIBLE
      
    In:
      50 60 50
    Out:
      NOT ELIGIBLE (Mathematics marks < 60)
*/

int main(void) {
    int math, physics, chemistry;

    // Read marks in three subjects
    printf("Enter marks in Mathematics, Physics, Chemistry: ");
    scanf("%d %d %d", &math, &physics, &chemistry);

    // Calculate totals
    int total_all = math + physics + chemistry;
    int total_math_physics = math + physics;

    // Check eligibility conditions
    int eligible = 1;  // Assume eligible initially
    char reason[200] = "";

    // Check condition a: Mathematics >= 60
    if (math < 60) {
        eligible = 0;
        strcat(reason, "Mathematics marks < 60. ");
    }

    // Check condition b: Physics >= 50
    if (physics < 50) {
        eligible = 0;
        strcat(reason, "Physics marks < 50. ");
    }

    // Check condition c: Chemistry >= 40
    if (chemistry < 40) {
        eligible = 0;
        strcat(reason, "Chemistry marks < 40. ");
    }

    // Check condition d: Total >= 200
    if (total_all < 200) {
        eligible = 0;
        strcat(reason, "Total marks < 200. ");
    }

    // Check condition e OR f: Math + Physics >= 150
    if (total_math_physics < 150) {
        eligible = 0;
        strcat(reason, "Mathematics + Physics < 150. ");
    }

    // Display result
    printf("\n===== Admission Result =====\n");
    printf("Mathematics: %d\n", math);
    printf("Physics: %d\n", physics);
    printf("Chemistry: %d\n", chemistry);
    printf("Total (all three): %d\n", total_all);
    printf("Total (Math + Physics): %d\n", total_math_physics);
    printf("\n");

    if (eligible) {
        printf("Status: ELIGIBLE\n");
    } else {
        printf("Status: NOT ELIGIBLE\n");
        printf("Reason: %s\n", reason);
    }

    return 0;
}
