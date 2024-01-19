#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}


int main(void)
{
	char s1[] = "hola";
    char s2[] = "hocaa";
    int n = 2;
	int x = 0;

	printf("Funcion original: %c.\n", strncmp(s1, s2, n));
	printf("Mi funcion: %c", ft_strncmp(s1, s2, n));

    return (0);
}