/*
Deepanshu Saini
MT2024039

/*
write a program to execute ls -Rl by the following system calls
c. execle
*/

#include <stdio.h>
#include <unistd.h>
int main(int argc,char *argv[],char *env[])
{
    //we have to pass environment variable
    char *path = "/bin/ls";
    execle(path, path, "-Rl" ,"newfile.txt",NULL, env);
    return 0;
}

/*
-rwxr--r-- 1 deepanshu-saini deepanshu-saini 0 Aug  8 09:20 newfile.txt
*/