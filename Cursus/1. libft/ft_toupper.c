#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
			c -= 32;
	return (c);
}


int main(void) 
{
    char miCaracter = 'A';
	
	printf("Función original: %c", toupper(miCaracter));
	printf("Mi función: %c", ft_toupper(miCaracter));
    
	return 0;
}