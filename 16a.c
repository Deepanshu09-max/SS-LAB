/*
Deepanshu Saini
MT2024039
*/

// 16. Write a program to perform mandatory locking.
// a. Implement a write lock

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];
    int fd = open(filename, O_RDWR);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    struct flock lock;
    lock.l_type = F_WRLCK;    
    lock.l_whence = SEEK_SET; 
    lock.l_start = 0;         
    lock.l_len = 0;         
    lock.l_pid = getpid();    

    // Check if the file is already locked
    struct flock currentLock;
    currentLock = lock;
    if (fcntl(fd, F_GETLK, &currentLock) == -1) {
        perror("Error checking lock status");
        close(fd);
        return 1;
    }

    if (currentLock.l_type == F_WRLCK) {
        printf("File is already write-locked by another process (PID: %d)\n", currentLock.l_pid);
    } else if (currentLock.l_type == F_RDLCK) {
        printf("File is currently read-locked by another process (PID: %d)\n", currentLock.l_pid);
    } else {
        // Apply the write lock
        if (fcntl(fd, F_SETLK, &lock) == -1) {
            perror("Error applying write lock");
            close(fd);
            return 1;
        }
        printf("File is now locked for writing.\n");
    }

    // pause();

    close(fd);
    return 0;
}


/*
OUTPUT:

*/
