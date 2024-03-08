#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int pid = fork();
    printf("id del proceso %d\n", pid);


    if(pid > 0)
    {
        sleep(30);
    }
    else if(pid == 0)
    {
        printf("\nProceso Zombie Creado con exito!");
        printf("\nEstara activo durante 30 segundos");
        exit(0);
    }
    else
    {
        printf("\nLo sentimos, el proceso hijo no se pudo crear");
    }
    return 0;
}