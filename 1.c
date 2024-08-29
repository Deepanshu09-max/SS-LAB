// Deepanshu Saini
// MT2024039

/*
1. Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call)
b. hard link (link system call)
c. FIFO (mkfifo Library Function or mknod system call)
*/

#include <stdio.h>
#include <unistd.h>

int main() {
    if (symlink("documents", "softl") == -1) {
        perror("symlink failed");
        return 1;
    }
    return 0;
}
