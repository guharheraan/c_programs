#include <stdio.h>

/*
  Find the count and sum of all integers greater than 100 and less than 200
  that are divisible by 7.

  Output (stdout):
    - List of numbers divisible by 7 in the range (100, 200)
    - Count of such numbers
    - Sum of such numbers

  Example Output:
    Numbers divisible by 7 between 100 and 200:
    105 112 119 126 133 140 147 154 161 168 175 182 189 196
    
    Count: 14
    Sum: 2107
*/

int main(void) {
    int count = 0;
    int sum = 0;

    printf("Numbers divisible by 7 between 100 and 200:\n");

    // Loop through all integers from 101 to 199
    for (int i = 101; i < 200; ++i) {
        // Check if divisible by 7
        if (i % 7 == 0) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }

    printf("\n\nCount: %d\n", count);
    printf("Sum: %d\n", sum);

    return 0;
}
