 #include "header.h"


 int main(void)
 {
    int fd = open("test", O_RDONLY);

    if (fd == -1)
        perror("Error");
 }