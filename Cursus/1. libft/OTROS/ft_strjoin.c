/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:06:14 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/16 20:57:20 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*not(void)
{
	char	*not;

	not = malloc(1 * sizeof(char));
	not[0] = '\0';
	return (not);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		len;
	int		i;

	i = -1;
	len = 0;
	if (size == 0)
		return (not());
	while (++i < size)
		len += ft_strlen(strs[i]);
	len = len + (ft_strlen(sep) * (size - 1)) + 1;
	dest = malloc(len * sizeof(char));
	if (dest == NULL)
		return (0);
	i = -1;
	while (++i < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (i < size - 1)
			dest = ft_strcat(dest, sep);
	}
	dest[len] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char **strs;
	strs =  malloc(3 * sizeof(char *));
	strs[0] = "hola";
	strs[1] = "que";
	strs[2] = "tal";
	printf("%s", ft_strjoin(0, strs, "I"));
	return (0);
}
*/