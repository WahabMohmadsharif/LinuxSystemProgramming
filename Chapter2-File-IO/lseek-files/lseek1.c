#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


	void main()
	{
		int fd;
		int sz;
		char buff[100];
		fd=open("sample.txt",O_RDONLY);
		if(fd==-1)
			{
				perror("open");
			}
		lseek(fd,3,SEEK_SET);
		sz=read(fd,buff,sizeof(buff));
		buff[sz]='\0';
		
		printf("%s",buff);
	}
