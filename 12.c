/*
Deepanshu Saini
MT2024039

12. Write a program to determine the opening mode of a file using fcntl.
*/

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return 1;
    }

    int fileFlags = fcntl(fd, F_GETFL);
    if (fileFlags < 0) {
        perror("Error retrieving file status flags");
        close(fd);
        return 1;
    }

    int accessMode = fileFlags & O_ACCMODE;
    printf("File opening mode: ");

    switch (accessMode) {
        case O_RDONLY:
            printf("O_RDONLY\n");
            break;
        case O_WRONLY:
            printf("O_WRONLY\n");
            break;
        case O_RDWR:
            printf("O_RDWR\n");
            break;
        default:
            printf("Unknown mode\n");
            break;
    }

    close(fd);
    return 0;
}
