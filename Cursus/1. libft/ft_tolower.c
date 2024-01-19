#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
			c += 32;
	return (c);
}


int main(void) 
{
    char miCaracter = 'A';
	
	printf("Función original: %c", tolower(miCaracter));
	printf("Mi función: %c", ft_tolower(miCaracter));
    
	return 0;
}
