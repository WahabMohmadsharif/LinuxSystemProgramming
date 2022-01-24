// C program to illustrate
// read system Call
#include<stdio.h>
#include <fcntl.h>
int main()
{
int fd, sz;
char c[100];
fd = open("sample.txt", O_RDONLY);
if (fd < 0) { perror("open"); exit(1); }

sz = read(fd, c, sizeof(c));
c[sz] = '\0';
printf("Those bytes are as follows: % s\n", c);
}

