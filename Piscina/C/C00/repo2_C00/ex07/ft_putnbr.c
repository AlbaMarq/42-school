/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:58:02 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/13 10:43:36 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb >= 10)
			ft_putnbr((nb / 10));
		nb = (nb % 10) + '0';
		write (1, &nb, 1);
	}
}
/*
int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}
*/