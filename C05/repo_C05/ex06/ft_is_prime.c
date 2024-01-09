/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:53:30 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/13 21:02:41 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 7;
	if ((nb % 2) == 0)
		return (0);
	if ((nb % 3) == 0)
		return (0);
	if ((nb % 5) == 0)
		return (0);
	while (i < (nb / 2) && i != 2 && i != 3 && i != 5)
	{
		if ((nb % i) == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}
/*
int main(void)
{
	printf("%d", ft_is_prime(2147483647));
	return (0);
}
*/