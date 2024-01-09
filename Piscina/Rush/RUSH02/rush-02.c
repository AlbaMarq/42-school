#include <unistd.h> //write
#include <stdlib.h> //malloc y free
// open, close, read y write
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h> //printf

// OPEN - CLOSE
// int open(const char *camino, int flags);
// int open(const char *camino, int flags, mode_t modo);
// int close(int fd);

// READ - WRITE
// ssize_t read(int fd, void *buf, size_t nbytes);
// ssize_t write(int fd, const void *buf, size_t num);

int main (int argc, char **argv)
{
    if (argc == 2) // convertir el argumento
    {

    }
    else if (argc == 3) // argumento 1 es el nuevo diccionario de referencia y arg2 es el valor a convertir
    {

    }
    else
        write(1, "Error: more than 2 arguments", 28);
    return (0);
}