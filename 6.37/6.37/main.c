//
//  main.c
//  6.37
//
//  Created by William Ng on 2023/12/16.
//

#include <stdio.h>

int recursiveMaximum(const int array[], int size);

int main() {
    int myArray[] = {12, 5, 8, 25, 16, 30, 20};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    printf("Array elements: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", myArray[i]);
    }

    int max = recursiveMaximum(myArray, arraySize);
    printf("\nMaximum element: %d\n", max);

    return 0;
}

int recursiveMaximum(const int array[], int size) {
    
    if (size == 1) {
        return array[0];
    }

    int maxRest = recursiveMaximum(array + 1, size - 1);

    return (array[0] > maxRest) ? array[0] : maxRest;
}
