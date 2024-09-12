/*
Deepanshu Saini
MT2024039

11. Write a program to open a file, duplicate the file descriptor, and append to the file using both the
original and duplicated descriptors. Then, verify whether the file is updated correctly.
a. use dup
b. use dup2
c. use fcntl
*/

#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    int fd = open(argv[1], O_WRONLY | O_APPEND | O_CREAT, S_IRUSR | S_IWUSR);
    if (fd < 0) {
        perror("Failed to open file");
        return 1;
    }

    int d1 = dup(fd); // Duplicate the file descriptor to the lowest available
    write(fd, "Hi, written using original file descriptor\n", 43);
    write(d1, "Hello, written using dup() file descriptor\n", 43);

    int d2 = dup2(fd, 10); // Duplicate to a specific file descriptor (10)
    if (d2 < 0) {
        perror("Failed to duplicate using dup2");
    } else {
        write(d2, "Hello, written using dup2() file descriptor\n", 44);
    }

    int d3 = fcntl(fd, F_DUPFD, 5); // Duplicate to a file descriptor >= 5
    if (d3 < 0) {
        perror("Failed to duplicate using fcntl");
    } else {
        write(d3, "Hello, written using fcntl() file descriptor\n", 45);
    }

    close(fd);
    close(d1);
    close(d2);
    close(d3);

    return 0;
}







/*
OUTPUT:
Hi, written using original file descriptor
Hello, written using dup() file descriptor
Hello, written using dup2() file descriptor
Hello, written using fcntl() file descriptor

*/