#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_LINE 256

// Use fprintf to print output to different streams
// How do each of the following behave?

// Run with Input Redirection
// ./redirect_input < input.txt

// Suppress stdout, show only stderr
// ./redirect_input < input.txt

// Redirect both stdout and stderr to a file
// ./redirect_input < input.txt > /dev/null

int main() {
    char buffer[MAX_LINE];

    fprintf(stdout, "Reading input from stdin...\n");

    while (fgets(buffer, MAX_LINE, stdin)) {
        // Simulate processing input
        fprintf(stdout, "Read line: %s", buffer);
    }

    fprintf(stderr, "End of input stream reached.\n");
    return 0;
}
