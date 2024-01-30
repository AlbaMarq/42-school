/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:19:15 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/30 20:20:45 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strnum(int n)
{
	char	*aux;
	int		i;

	aux = NULL;
	i = 0;
	if (n >= 10)
	{
		aux[i] = (n % 10) + '0';
		i++;
		strnum((n / 10));
	}
	aux[i] = n + '0';
	aux[++i] = '\0';
	return (aux);
}

static char	*strinv(char *dst, char *aux, int sign)
{
	int	i;
	int	len;

	len = ft_strlen(aux);
	if (sign == 1)
	{
		i = 1;
		dst[0] = '-';
	}
	else
		i = 0;
	dst = malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (i < len)
	{
		dst[i] = aux[len - i];
		i++;
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		sign;

	dst = NULL;
	sign = 0;
	if (n == -2147483648)
		dst = "-2147483648";
	else
	{
		if (n < 0)
		{
			n = -n;
			sign = 1;
		}
		dst = strinv(dst, strnum(n), sign);
	}
	return (dst);
}
