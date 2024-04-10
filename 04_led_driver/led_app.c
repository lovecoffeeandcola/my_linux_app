#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>



/*main function*/
int main(int argc,char **argv)
{
    int fd_open;
    ssize_t write_return;
    size_t len;
    /*if parameter num is true?*/
    if((argc != 3)||(argc != 2))
    {
        printf("incorrect parameter num!\n");
        return -1;
    }
    
    /*parameter*/
    if(argv[0] != (("open")&&("write")))
    {
        printf("incorrect parameter!\n");
        return -1;
    }

    if(argv[0] == "open")
    {
        fd_open = open(argv[1],O_RDWR);
        if(fd_open == -1)
        {
            printf("can not open file:%s\n",argv[1]);
        }
    }
    else if(argv[0] == "write")
    {
        /**
         * argv[2]: ON 1 /OFF 0
        */
        write_return = write(fd_open, argv[2], strlen(argv[2]));
        if(write_return == -1)
        {
            printf("can ont write file:%s",argv[1]);
        }
    }



    return 0;
}












