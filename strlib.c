#include <stdio.h>
#include <stdlib.h>

int str_len(char* str) {
    /*
     * Returns the length of the string
     * @param str: the string to test
     * @returns: the length of the string.
    */ 

    int index = 0;

    while (1) {
        char sub_char = str[index];

        if (sub_char == 0) {
            return index;
        }

        index++;
    } 
}

int str_cmp(char* str_a, char* str_b) {
    /*
     * Compares two strings to see if they are the same.
     * @param str_a: the first string to compare
     * @param str_b: the second string to compare.
    */ 

    // Strings with different sizes are not the same.
    if (str_len(str_a) != str_len(str_b)) {
        return 0;
    } 

    // Compare each index in the string.
    for (int index = 0; index < str_len(str_a); index++) {
        if (str_a[index] != str_b[index]) {
            return 0;
        } 
    }

    return 1;
}
