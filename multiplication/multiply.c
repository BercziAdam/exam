#include <stdio.h>

/**
 * Create a function that prints a multiplication table with a given base number.
 * It should take the base number as a parameter, and print the output to the console.
 *
 * The output should look like this for 5 as base:
 *   1 * 5 = 5
 *   2 * 5 = 10
 *   3 * 5 = 15
 *   4 * 5 = 20
 *   5 * 5 = 25
 *   6 * 5 = 30
 *   7 * 5 = 35
 *   8 * 5 = 40
 *   9 * 5 = 45
 *   10 * 5 = 50
 *
 * Non-positive base numbers should be treated as errors, handle it!
 */
void Multiplication(int base_num)
{
    if(base_num <= 0)
        printf("Non-positive base number please enter a new one!\n");
    else {
        for(int i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", i, base_num, i*base_num);
        }
    }
}
int main() {

    while(1) {
        int base_number;

        printf("Please enter a base number for multiplication table!\n");
        scanf(" %d", &base_number);

        Multiplication(base_number);
    }
    return 0;
}
