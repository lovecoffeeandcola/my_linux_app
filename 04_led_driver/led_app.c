#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h> 

/*main function*/
int main(int argc,char **argv)
{
    int fd_open;
    char status;
    /*if parameter num is true?*/
    if(argc != 3)
    {
        printf("incorrect parameter num!\n");
        return -1;
    }
    
    /*open file*/
    fd_open = open(argv[1],O_RDWR);

    if(fd_open == -1)
    {
        printf("can not open file:%s!\n",argv[1]);
        return -1;
    }

    /*write file*/
    if (0 == strcmp(argv[2], "on"))
	{
		status = 1;
		write(fd_open, &status, 1);
	}
	else
	{
		status = 0;
		write(fd_open, &status, 1);
	}
	
	close(fd_open);

    return 0;
}












