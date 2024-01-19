#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}


int main(void) 
{
    char miCaracter = 'A';
	
	printf("Funcion original:");
    if (isalnum(miCaracter))
		printf("%c es un carácter alfanumérico.\n", miCaracter);
	else
		printf("%c no es un carácter alfanumérico.\n", miCaracter);
	
	printf("Mi funcion:");
    if (ft_isalnum(miCaracter)) 
        printf("%c es un carácter alfanumérico.\n", miCaracter);
	else
        printf("%c no es un carácter alfanumérico.\n", miCaracter);
    
	return 0;
}