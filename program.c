// program to get the length of a string
#include <stdio.h>
#include <string.h>

int main () { // main function
    char str[25]; // string limited to 25 characters

    printf("Enter a statement:\n");

    fgets(str, sizeof(str), stdin); // user input

    // remove the newline charcter that fgets includes
    str[strcspn(str, "\n")] = 0;

    printf("Entry:\t%s\n", str);

    int length = strlen(str);

    printf("Length:\t%d\n", length);

    return 0;
}