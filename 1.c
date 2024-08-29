#include <stdio.h>
#include <unistd.h>

int main() {
    if (symlink("file", "softl") == -1) {
        perror("symlink failed");
        return 1;
    }
    return 0;
}
