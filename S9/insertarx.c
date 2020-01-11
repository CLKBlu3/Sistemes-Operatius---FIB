#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
main (int argc, char *argv[])
{
    char buffer[32];
    int fd = open("salida.txt", O_RDWR); //Abrir read&write
    lseek(fd, -1, SEEK_END); //Buscamos la penultima posicion del fichero.
    read(fd, &buffer, sizeof(char)); //leemos ultima posicion
    lseek(fd, -1, SEEK_CUR);
    char buff[16];
    strcpy(buff, "X"); //copiem una X a buff
    write(fd, buff, strlen(buff));
    write(fd, buffer, strlen(buffer));
    close(fd);
    
}
