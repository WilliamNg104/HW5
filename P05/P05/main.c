//
//  main.c
//  P05
//
//  Created by William Ng on 2023/12/10.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    int *aPtr;
    
    a=7;
    aPtr=&a;
    
    printf("The adddres of a is %p"
           "\nThe value of aPtr is %p",&a,aPtr);
    
    printf("\n\nThe value of a is %d"
           "\nThe value of *aPtr is %d",a,*aPtr);
    
    printf("\n\nShowing that * and & are complements of "
           "each other\n&*aPtr = %p"
           "\n*&aPtr = %p\n",&*aPtr,*&aPtr);

    system("pause");
    
    return 0;
}
