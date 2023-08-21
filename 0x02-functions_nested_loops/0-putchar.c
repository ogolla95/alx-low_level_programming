/*
 * File: 0-holberton.c
 * Auth: Odhiambo Fredrick
 */

#include <stdio.h>

int main() {
    char *text = "_putchar\n"; // Store the desired text in a string
    
    while (*text != '\0') {   // Loop through the characters in the string
        putchar(*text);       // Print the current character
        text++;               // Move to the next character
    }
    
    return 0; // Return 0 to indicate successful execution
}

