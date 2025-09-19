#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void doit() {
    if (fork() == 0) {
        printf("hello\n");
        if (fork() == 0)
            printf("hello\n");
        if (fork() > 0)
            exit(0);
    }
    printf("hello\n");
}

int main() {
    doit();
    printf("hello\n");
    return 0;
}
