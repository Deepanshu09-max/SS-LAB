/*
Deepanshu Saini
MT2024039

15. Write a program to display the environmental variable of the user (use environ).
*/
#include <stdio.h>

extern char **environ; 
int main() {
    char **env = environ;

    while (*env) {
        printf("%s\n", *env);
        env++;
    }

    return 0;
}