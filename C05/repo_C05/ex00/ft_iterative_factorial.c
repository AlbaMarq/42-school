/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:37:02 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/13 12:37:57 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		while (i > 1)
		{
			nb = nb * i;
			i--;
		}
	}
	return (nb);
}
/*
int main(void)
{
    printf("%d", ft_iterative_factorial(12));
    return (0);
}
*/