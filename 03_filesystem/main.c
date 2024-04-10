#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>


int main(int argc,char **argv)
{
	int fd;
	char buffer[10];

	if(argc != 2)
	{
		printf("error: format error!\n");
	}
	else
	{
		
	}

	fd = open(argv[1], O_RDONLY);

	if(fd == -1)
	{
		//printf("can not open file:%s,argv[1]");
		return -1;
	}
	else
	{
		read(fd,buffer,5);
		printf("read data is:%s\n",buffer);
	}
	return 0;
}

	
