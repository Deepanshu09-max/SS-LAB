/*
Deepanshu Saini
MT2024039

/*
write a program to execute ls -Rl by the following system calls
d. execv
*/

#include <stdio.h>
#include <unistd.h>
int main()
{
    char *path = "/bin/ls";
    char *argv[] = {path,"-Rl",NULL};
    execv(path, argv);
    return 0;
}

/*
/*
Parv Ketanbhai Gatecha
MT2024108

/*
write a program to execute ls -Rl by the following system calls
d. execvp
*/

#include <stdio.h>
#include <unistd.h>
int main()
{
    // it will use environment variable PATH to run executable PATH .
    // it does not required entire file path as we did in execl().
    char *path = "ls";
    char *argv[] = {path, "-Rl", NULL};
    execvp(path, argv);
    return 0;
}

/*
.:
total 204
-rwxrwxr-x 1 deepanshu-saini deepanshu-saini 15952 Aug 29 19:52 1
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   641 Aug 31 01:43 10.c
-rw-r--r-- 1 deepanshu-saini deepanshu-saini    30 Aug 31 01:44 10txt.txt
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini  1608 Aug 31 01:53 11.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini  1076 Aug 31 01:55 12.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   658 Aug 31 01:56 13.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini  1019 Aug 31 01:59 14.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   288 Aug 31 02:00 15.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini  1738 Aug 31 02:03 16a.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini  1671 Aug 31 10:21 16b.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   809 Aug 31 10:24 17a.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini  1058 Aug 31 10:26 17b.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini     0 Aug 31 10:27 18
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   501 Aug 31 10:28 19.c
-rw-rw-r-- 2 deepanshu-saini deepanshu-saini   418 Aug 29 20:11 1a.c
-rwxrwxr-x 1 deepanshu-saini deepanshu-saini 16032 Aug 30 11:10 1b
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   491 Aug 30 11:20 1b.c
-rwxrwxr-x 1 deepanshu-saini deepanshu-saini 16032 Aug 30 10:22 1c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   503 Aug 30 10:22 1c.c
-rw------- 1 deepanshu-saini deepanshu-saini     0 Aug 30 17:33 1txt.txt
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   757 Aug 31 10:29 20.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   321 Aug 31 10:30 21.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   511 Aug 31 10:31 22.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   959 Aug 31 10:31 23.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   959 Aug 31 10:41 24.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   241 Aug 31 10:44 26a.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   338 Aug 31 10:44 26b.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini  3475 Aug 31 10:49 27a.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini  3494 Aug 31 10:51 27b.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   395 Aug 31 10:52 27c.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini  3379 Aug 31 10:53 27d.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini     0 Aug 31 10:53 27e.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   354 Aug 30 10:49 2.c
-rw------- 1 deepanshu-saini deepanshu-saini     0 Aug 30 17:33 2txt.txt
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   408 Aug 30 11:23 3.c
-rw------- 1 deepanshu-saini deepanshu-saini     0 Aug 30 11:24 3txt.txt
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   311 Aug 30 11:50 4.c
-rw------- 1 deepanshu-saini deepanshu-saini     0 Aug 30 17:33 4txt.txt
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   780 Aug 30 17:32 5.c
-rw------- 1 deepanshu-saini deepanshu-saini     0 Aug 30 17:33 5txt.txt
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   541 Aug 30 17:34 6.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   433 Aug 31 01:37 7.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini   672 Aug 31 01:42 8.c
-rw-rw-r-- 1 deepanshu-saini deepanshu-saini  1127 Aug 31 01:43 9.c
-rwxrwxr-x 1 deepanshu-saini deepanshu-saini 16000 Aug 31 10:53 a.out
prw-rw-r-- 1 deepanshu-saini deepanshu-saini     0 Aug 30 10:22 file
-rw-rw-r-- 2 deepanshu-saini deepanshu-saini     0 Aug 29 19:52 README.md
-rw-rw-r-- 2 deepanshu-saini deepanshu-saini     0 Aug 29 19:52 sftlh
-rw-rw-r-- 2 deepanshu-saini deepanshu-saini   418 Aug 29 20:11 sftlh00
lrwxrwxrwx 1 deepanshu-saini deepanshu-saini     9 Aug 29 20:12 softl -> documents
*/