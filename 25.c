/*
Deepanshu Saini
MT2024039

25. Write a program to create three child processes. The parent should wait for a particular child (use
waitpid system call).
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>


int main(int argc, char* argv[])
{
    int i = 0, j, k, w;
    w = *argv[1] - '0';
    if(!(i=fork()))
        sleep(1);
    else
        if(!(j=fork()))
            sleep(3);
        else
            if(!(k=fork()))
                sleep(10);
            else{
                switch (w)
                {
                case 1:
                    waitpid(i,NULL,0);
                    break;
                case 2:
                    waitpid(j,NULL,0);
                    break;
                case 3:
                    waitpid(k,NULL,0);
                    break;
                default:
                    break;
                }
            }
    return 0;
}