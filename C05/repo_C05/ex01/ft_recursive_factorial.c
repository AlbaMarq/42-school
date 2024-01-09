/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:09:35 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/13 20:05:42 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
int main(void)
{
    printf("%d", ft_recursive_factorial(12));
    return (0);
}
*/