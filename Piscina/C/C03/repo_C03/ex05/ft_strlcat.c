/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:25:52 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/07 19:10:53 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (size == 0)
		return (i);
	while (src[j] != '\0' && j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}
/*
int main(void)
{
    char dest[15] = "hola";
    char src[] = ", que tal?";
    int size = 4;
    int x = 0;

    x = ft_strlcat(dest, src, size);
    printf("%s\n", dest);
    printf("%d", x);
    return (0);
}
*/
