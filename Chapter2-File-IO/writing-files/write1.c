#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>



void main()
{

	int fd;
	int sz;
	char writebuff[]="I am writing on buffer\n";

	fd=open("new.txt",O_CREAT | O_WRONLY);

		if(fd==-1)
		{
			perror("open");
		}
	
	sz=write(fd,writebuff,sizeof(writebuff));	

		if(fd==-1)
		{
			perror("write");
		}	
		
}
