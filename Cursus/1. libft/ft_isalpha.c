#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}


int main(void) 
{
    char miCaracter = 'A';
	
	printf("Función original:");
    if (isalpha(miCaracter))
		printf("%c es una letra alfabética.\n", miCaracter);
	else
		printf("%c no es una letra alfabética.\n", miCaracter);
	
	printf("Mi función:");
    if (ft_isalpha(miCaracter)) 
        printf("%c es una letra alfabética.\n", miCaracter);
	else
        printf("%c no es una letra alfabética.\n", miCaracter);
    
	return 0;
}

