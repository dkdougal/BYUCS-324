#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_LINE 256

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
