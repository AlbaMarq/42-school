/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:17:22 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/09 18:00:21 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	samechar(char *base)
{
	int	i;
	int	j;
	int	same;

	i = 0;
	j = 0;
	same = 0;
	while (i < ft_strlen(base))
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	sign(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

void	extrem(int nbr, char *base)
{
	unsigned int	unbr;
	unsigned int	ulen;
	char			mod;

	unbr = (unsigned int) nbr;
	ulen = (unsigned int) ft_strlen(base);
	if ((ft_strlen(base) > 1) && (samechar(base) == 0) && (sign(base) == 0))
	{
		if (unbr >= ulen)
			extrem((unbr / ulen), base);
		mod = base[unbr % ulen];
		write(1, &mod, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	mod;

	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		extrem(nbr, base);
	}
	else
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			write(1, "-", 1);
		}
		if ((ft_strlen(base) > 1) && (samechar(base) == 0) && (sign(base) == 0))
		{
			if (nbr >= ft_strlen(base))
				ft_putnbr_base((nbr / ft_strlen(base)), base);
			mod = base[nbr % ft_strlen(base)];
			write(1, &mod, 1);
		}
	}
}
/*
int	main(void)
{
	int	nbr;
    char base[] = "01";

	nbr = -2147483648;
	ft_putnbr_base(nbr, base);
	return (0);
}
*/
