/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:00:38 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/13 20:08:20 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	if (power > 0)
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
int main(void)
{
    printf("%d", ft_recursive_power(-4, -5));
    return (0);
}
*/