#include "libft.h"
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	else
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}


int main(void)
{
	char src[] = "Hola";
    char dest[] = "";
    int size = 2;
	int x = 0;

	printf("Inicial: %s", dest);
	printf("Funcion original: %c.\n", strlcpy(dest, src, size));
	printf("Mi funcion: %c", ft_strlcpy(dest, src, size));
	printf("\nFinal: %s", dest);

    return (0);
}
