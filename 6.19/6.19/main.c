#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    srand(time(NULL));

    int numThrows = 36000;

    int results[11] = {0};

    for (int i = 0; i < numThrows; i++) {
       
        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;

        int sum = die1 + die2;

        results[sum - 2]++;
    }

    printf("點數\t出現次數\t理論機率\n");

    for (int i = 0; i < 11; i++) {
        printf("%d\t%d\t\t%.4f\n", i + 2, results[i], (float)results[i] / numThrows);
    }

    return 0;
}
