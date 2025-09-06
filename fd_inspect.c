#include <unistd.h>
#include <stdio.h>

int main() {
    for (int fd = 0; fd < 10; fd++) {
        if (fcntl(fd, F_GETFD) != -1)
            printf("FD %d is open\n", fd);
    }
    return 0;
}
