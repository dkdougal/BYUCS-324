#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main() {
    sigset_t block_set, old_set;

    // Initialize the signal set and add SIGINT to it
    sigemptyset(&block_set);
    sigaddset(&block_set, SIGINT);

    // Block SIGINT and save the current signal mask
    if (sigprocmask(SIG_BLOCK, &block_set, &old_set) < 0) {
        perror("sigprocmask");
        exit(EXIT_FAILURE);
    }

    printf("SIGINT is now blocked. Try pressing Ctrl+C...\n");
    sleep(15);  // Critical section

    // Restore the old signal mask (unblock SIGINT)
    if (sigprocmask(SIG_SETMASK, &old_set, NULL) < 0) {
        perror("sigprocmask");
        exit(EXIT_FAILURE);
    }

    printf("SIGINT is now unblocked. Ctrl+C will terminate the program.\n");
    sleep(5);  // You can now interrupt

    return 0;
}
