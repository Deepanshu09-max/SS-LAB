/*
Deepanshu Saini
MT2024039

23. Write a program to create a Zombie state of the running program.
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
    int fd;
    fd = fork();
    if (fd == 0)
    {
        // inside child process as fd will be 0.
        printf("inside child pid= %d\n", getpid());
        printf("parent id= %d\n", getppid());
    }
    else
    {
        // inside parent as fd will be pid of child;

        // to create zombie we have create situation where child process finish execution and wait for parent to remove its processid from process table
        // for that we are using sleep() fun call in parent;
        

        sleep(3);
        printf("inside parent pid= %d\n", getpid());
        printf("child pid= %d\n", fd);
    }
    return 0;
}




/*
OUTPUT:
inside child pid= 38794
parent id= 38793
inside parent pid= 38793
child pid= 38794

*/