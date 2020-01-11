#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
main (int argc, char *argv[])
{
    int fd = creat("salida.txt", O_RDWR); //Read&Write
    char buffer[32]; //buffer
    strcpy(buffer, "ABCD"); //buffer <- ABCD
    write(fd, buffer, strlen (buffer)); //Escribim ABCD al fitxer.
    close(fd); //tanquem el fitxer
}
