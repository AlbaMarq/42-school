/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:17:14 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/29 21:41:42 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

static char	**split_rows(char const *s, char c, char **dst, size_t	count_word)
{
	size_t			i;
	size_t			row;
	size_t			len;
	unsigned int	start;

	i = 0;
	row = count_word;
	while (s[i] != '\0' && row > 0)
	{
		len = 0;
		start = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
		{
			len++;
			i++;
		}
		dst[count_word - row] = ft_substr(s, start, len);
		row--;
	}
	dst[count_word] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	count_word;

	count_word = count_words(s, c);
	dst = malloc((count_word + 1) * sizeof(char *));
	if (dst == NULL)
		return (NULL);
	dst = split_rows(s, c, dst, count_word);
	return (dst);
}
