/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:52:31 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/16 12:41:39 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb > 0)
	{
		while (++i < 46341 && i * i <= nb)
		{
			if (i * i == nb)
				return (i);
		}
	}
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_sqrt(2147483647));
	return (0);
}
*/