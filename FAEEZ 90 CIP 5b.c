#include <stdio.h>
int main(void)
{
    int i, a;
    
    printf("Enter a number :  ");
    scanf("%d", &a);
    
    for (i = 1; i <= a; i++) {
        if (i % 2 == 0) {
            printf("\nNumber %d is even", i);
        } else {
            printf("\nNumber %d is odd", i);
        }
    }
    
    return 0;
}

