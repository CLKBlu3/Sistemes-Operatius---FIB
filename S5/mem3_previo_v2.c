#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>

#define REGION_SIZE		4096

int *p;

void f_alarma(int s){
    char buffer[128];
    sprintf(buffer, "ERROR \n");
    write(1, buffer, strlen(buffer));
    exit(0);
}

int main(int argc, char *argv[])
{
	char buff[256];					

	sprintf( buff, "Addresses:\n");
	write(1, buff, strlen(buff));	
	sprintf( buff, "\tp: %p\n", &p);
	write(1, buff, strlen(buff));	
        
        signal(SIGSEGV, f_alarma);

	*p = 5;

	sprintf( buff, "\tp Address: %p, p value: %p, *p: %d\n", &p, p, *p);
	write(1, buff, strlen(buff));	

	exit(0);

}
