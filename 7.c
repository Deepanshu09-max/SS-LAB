/*
Deepanshu Saini
MT2024039

7. Write a program to copy file1 into file2 ($cp file1 file2).
*/

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
int main(int argc,char *argv[]){
	int sfd=open(argv[1],O_RDONLY);
	
	int dfd=open(argv[2],O_WRONLY|O_CREAT,S_IRWXU);
	
	char c;  
	while(read(sfd,&c,1)){
		write(dfd,&c,1);
	}
	printf("file copied");
	close(sfd);
	close(dfd);
	return 0;
}


/*
OUTPUT:
file copied

*/