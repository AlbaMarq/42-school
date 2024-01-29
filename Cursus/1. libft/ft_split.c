/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:17:14 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/29 14:34:01 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (dst == NULL)
		return (0);
	ft_strcpy(dst, s1);
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	int		i;

	i = 0;
	if ((start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	ss = malloc((len + 1) * sizeof(char));
	if (ss == NULL)
		return (NULL);
	while (s[start + i] && len > 0)
	{
		ss[i] = s[start + i];
		len--;
		i++;
	}
	ss[i] = '\0';
	return (ss);
}

// ----------------------------------------------------------------------

static size_t	count_words(const char *s, char c)
{
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static size_t	num_chars(const char *s, char c)
{
	int		i;
	size_t	num;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			num++;
		i++;
	}
	return (num);
}

static char	**split_rows(char const *s, char c, char **dst, size_t	row)
{
	size_t			i;
	size_t			len;
	unsigned int	start;

	i = 0;
	len = 0;
	start = 0;
	while (s[i] != '\0' && row > 0)
	{
		while (s[i] == c && s[i] != '\0')
		{
			start++;
			i++;
		}
		while (s[i] != c && s[i] != '\0')
		{
			len++;
			i++;
		}
		dst[row] = ft_substr(s, start, len);
		row--;
	}
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		i;
	size_t	count_word;
	size_t	num_char;

	i = 0;
	count_word = count_words(s, c);
	num_char = num_chars(s, c);
	dst = malloc((count_word + 1) * sizeof(char *));
	if (dst == NULL)
		return (NULL);
	dst = split_rows(s, c, dst, count_word);
	return (dst);
}

int	main(void)
{
	char **tab;
	char *s = "holaaa que tala";
	char c = 'a';
	int	i = 0;

	printf("Frase: %s \n", s);
	printf("Separador: %c \n", c);
	printf("Numero de separadores: %ld \n", num_chars(s, c));
	printf("Numero de palabras: %ld \n", count_words(s, c));
	printf("Array de frases separadas: \n");
	tab = ft_split(s, c);
	// Imprimir palabras
	for (int i = 0; *(tab + i); i++) {
        printf("%s\n", *(tab + i));
    }
    // Liberar la memoria
    for (int i = 0; *(tab + i); i++) {
        free(*(tab + i));
    }
    free(tab);
	return (0);
}
