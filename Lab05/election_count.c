#include <stdio.h>
#include <stdlib.h>

/*
  Program: Election vote counter for 5 candidates (numbered 1..5)
  - Reads integers from standard input representing ballots.
  - Counts votes for each candidate using an array.
  - Any number not in the range [1,5] is treated as a spoilt ballot.

  Input method options (choose one when running):
  1) Type numbers followed by Enter, and finish with EOF (Ctrl+Z then Enter on Windows).
     Example input:
       1 2 3 4 5 6 2 3 1 0 7 5
     Then press Ctrl+Z and Enter to end input.

  2) Redirect input from a file that contains ballot numbers separated by
     spaces or newlines.

  Build (Windows, using GCC via MinGW or similar):
    gcc -std=c11 -O2 -Wall -Wextra -o election_count election_count.c
*/

int main(void) {
    int count[5] = {0};
    int spoilt = 0;

    printf("Enter ballot numbers (1..5). End input with EOF (Ctrl+Z then Enter on Windows).\n");

    int ballot;
    while (scanf("%d", &ballot) == 1) {
        if (ballot >= 1 && ballot <= 5) {
            count[ballot - 1]++;
        } else {
            spoilt++;
        }
    }

    printf("\nVote tally:\n");
    int total_valid = 0;
    for (int i = 0; i < 5; ++i) {
        printf("Candidate %d: %d\n", i + 1, count[i]);
        total_valid += count[i];
    }
    printf("Spoilt ballots: %d\n", spoilt);
    printf("Total valid votes: %d\n", total_valid);
    printf("Total ballots (including spoilt): %d\n", total_valid + spoilt);

    return 0;
}
