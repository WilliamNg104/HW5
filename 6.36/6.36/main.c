//
//  main.c
//  6.36
//
//  Created by William Ng on 2023/12/16.
//

#include <stdio.h>

void stringReverse(const char *str);

int main() {
    char myString[] = "Hello, World!";
    
    printf("Original String: %s\n", myString);
    
    printf("Reversed String: ");
    stringReverse(myString);
    printf("\n");

    return 0;
}

void stringReverse(const char *str) {
    // Base case: stop when the null character is encountered
    if (*str == '\0') {
        return;
    }

    // Recursive case: print the string in reverse order
    stringReverse(str + 1);
    printf("%c", *str);
}

