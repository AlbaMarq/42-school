/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:17:14 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/24 21:48:33 by albmarqu         ###   ########.fr       */
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

// ----------------------------------------------------------------------

static int	count_c(const char *s, char c) // Como se delimita ?? Y si hay mas de un delimitador seguido ?? Y si el delimitador está al inicio o al final ??
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	// Opcion 1: Cuento las palabras, mirando si lo siguiente es un delimitador
	if (s[i] == c)
		count++;
	i++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}

	// Opcion 2: Cuento el numero de delimitadores
	/*
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	*/

	return (count);
}

static char	**alg(char const *s, char c, char **dst)
{
	int		i;
	int		row;
	int		col;

	i = 0;
	row = 0;
	col = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			dst[row][col] = s[i];
			row++;
		}
		else if (s[i] != c)
		{
			dst[row][col] = '\0';
			row = 0;
			col++;
		}
		i++;
	}
	dst[row][col] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		i;
	int		count;

	i = 0;
	count = 0;
	//if (ft_strlen(s) == 0)
		//return (ft_strdup("")); //Falla porque split devuelve ** y strdup solo *
	count = count_c(s, c);
	dst = malloc((strlen(s) + count + 1) * sizeof(char *));
	if (dst == NULL)
		return (NULL);
	dst = alg(s, c, dst);
	return (dst);
}


int	main(void)
{
	char **tab;
	char *s = "ahola que tala";
	char c = 'a';
	int	i = 0;

	printf("Frase: %s \nSeparador: %c \nNumero de separadores: %d \n", s, c, count_c(s, c));
	printf("Array de frases separadas: \n");
	tab = ft_split(s, c);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}

	return (0);
}
