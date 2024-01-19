#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}


int main(void) 
{
    char miCaracter = 'A';
	
	printf("Funcion original:");
    if (isprint(miCaracter))
		printf("%c es un carácter imprimible.\n", miCaracter);
	else
		printf("%c no es un carácter imprimible.\n", miCaracter);
	
	printf("Mi funcion:");
    if (ft_isprint(miCaracter)) 
        printf("%c es un carácter imprimible.\n", miCaracter);
	else
        printf("%c no es un carácter imprimible.\n", miCaracter);
    
	return 0;
}
