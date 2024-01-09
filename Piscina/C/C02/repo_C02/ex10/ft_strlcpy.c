/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:27:06 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/02 18:21:37 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest_len = ft_strlen(dest);
	if (dest_len > 0)
	{
		dest[i] = '\0';
	}
	src_len = ft_strlen(src);
	return (src_len);
}
/*
int main(void)
{
    char src[] = "Hola";
    char dest[] = "";
    int size = 2;

    printf("Inicial: %s", dest);
    ft_strlcpy(dest, src, size);
    printf("\nFinal: %s", dest);
    return (0);
}
*/
