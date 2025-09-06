#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    for (int fd = 0; fd < 10; fd++) {
        if (fcntl(fd, F_GETFD) != -1) {
            printf("FD %d is open\n", fd);
        } else {
            // Optional: print closed descriptors
            printf("FD %d is closed\n", fd);
        }
    }
    return 0;
}
