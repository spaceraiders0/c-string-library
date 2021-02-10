#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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
     * @returns: whether or not the strings are the same.
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


char* str_slice(char* slice, int start, int stop, int step) {
    /*
     * Slices a string between start, and stop. Going up by
     * step each time.
     * @param slice: the string to slice
     * @param start: where to start slicing 
     * @param stop: where to stop slicing
     * @param step: how far to increment each step
    */ 
    
    // Allocate a new string that will be sized down after.
    char* sliced_string = malloc(str_len(slice));
    int index = 0;

    for (int head = start; head < stop; head += step) {
        sliced_string[index] = slice[head];
        index++;
    }
    
    // Resize the string.
    char* new_slice = realloc(sliced_string, index);

    return new_slice;
}


int str_count(char* check, char* count) {
    /*
     * Count the number of occurrances of count in the string.
     * @param check: the string to count in
     * @param count: the string to count
    */ 

    int occurrances = 0;
    int increment = str_len(count);
    
    for (int start_index = 0; start_index < str_len(check); start_index++) {
        int end_index = start_index + increment;
        
        // end_index being larger than the length means there is
        // nothing left to search for.
        if (end_index > str_len(check)) {
            return occurrances;
        }

        printf("Slice: %s\n", str_slice(check, start_index, end_index, 1));
    }

    return occurrances;
}


char* str_repl(char* str, char* sub, char* repl) {
    /*
     * Replaces all occurances of sub with repl.
     * @param str: the string to replace from
     * @param sub: the string to substitute from str
     * @param repl: the string to replace sub with.
    */ 

    int repl_len = str_len(repl);
    int index = 0;
    int occurances = 0;
    char* new_string = malloc(str_len(str));
    
    // Determine how many occurances of sub appears in the string.
    int occurrances = str_count(str, sub);

    return new_string;
}
