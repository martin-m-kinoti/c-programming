// list of any 5 numbers
#include <stdio.h>

int main () {
    int x, numbers[5];
    printf("Enter any 5 numbers:\n");
    for (x=0; x <=4; x++) {
        scanf("%d\n", &numbers[x]);
    }

    // change last value to 20
    numbers[4] = 20;
    printf("updated value:\t%d\n", numbers[4]);
    
    return 0;
}