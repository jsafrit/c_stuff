#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>

int fp = -1;

int main(int argc, char *argv[])
{
    int rc;
    int len;
    char buffer[80];
    int i;

    printf("Starting\n");

    fp = open("/dev/random", O_RDWR|O_NOCTTY);

    if(fp > 0)
    {
        printf("success\n");
        rc = read(fp, buffer, 5);
        printf("rc: %d\n", rc);
        if(rc > 0)
        {
            for(i=0;i<rc;i++)
                printf("%02x ", (unsigned char)(buffer[i] & 0xff));

            printf("\n");
        }
    }
    else
    {
        printf("fail\n");
        fp = -1;
        return;
    }
        

    close(fp);
    fp = 0;
    return 0;
}