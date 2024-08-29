#include<stdio.h>
#include<unistd.h>

int main() {
    symlink("file", "softl");
    return 0;
}

