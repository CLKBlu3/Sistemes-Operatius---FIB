#include <unistd.h>
#include <stdio.h>
#include <string.h>

main(int argc, char *argv[]){
    int numero;  //variable buffer per a guardar un enter
    char buffer[80];
    
    while(read(0,&numero,sizeof(int))>0){
        sprintf(buffer,"%d\n",numero); //llegeix X bytes de entrada sent X el tamany del buffer indicat (INT numero)
        write(1,buffer,strlen(buffer));
    }

}
