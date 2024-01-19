#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!size)
		return (dst_len + size);
	if (dst_len >= size)
		return (src_len + size);
	while (src[i] != '\0' && i < size - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < size)
		dst[i] = '\0';
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}


int main(void)
{
	char dest[] = "hola";
    char src[] = ", que tal?";
    int size = 6;
	int x = 0;

	printf("Inicial: %s", dest);
	printf("Funcion original: %c.\n", strlcat(dest, src, size));
	printf("Mi funcion: %c", ft_strlcat(dest, src, size));
	printf("\nFinal: %s", dest);

    return (0);
}