#include "header.h"

/**
 * main - fifo read program
*/

int main(void)
{
    int i, random;
    char filename[] = "sum";
    int fd = open("sum", O_CREAT | O_WRONLY, S_IRWXU);


    if (fd == -1)
    {
        printf("Failed to open file %s\n", filename);
        return (1);
    }

    for (i = 0; i < 5; i++)
    {
        random = rand() * 10;
        if (write(fd, &random, sizeof(random)) == -1)
            {
                printf("Failed to write %d to file: %s\n", random, filename);
                return (2);
            }
    }

    close(fd);

    return (0);
    
}