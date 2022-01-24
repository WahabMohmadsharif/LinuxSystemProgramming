#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


void main()
{
int fd;
fd=open("./sample.txt",O_CREAT|O_WRONLY|O_RDONLY);
	if (fd<0)
	{
	perror("open");
	}
	else
	{
	printf("File was opened\n");
	}
}
