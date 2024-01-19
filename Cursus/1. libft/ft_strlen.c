#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int main(void)
{
	char str[] = "Hola";

	printf("Funcion original: %c.\n", strlen(str));
	printf("Mi funcion: %c", ft_strlen(str));

    return (0);
}
