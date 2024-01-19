/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:10:11 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/19 17:30:56 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize < 1)
		return (src_len);
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	while (src[i] != '\0' && i < dstsize - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
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
*/