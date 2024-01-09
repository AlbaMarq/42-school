/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:04:08 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/13 14:10:43 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;
	int	a;
	int	b;
	int	num;

	i = 1;
	a = 0;
	b = 1;
	if (index == 0)
		return (a);
	else if (index == 1)
		return (b);
	else
	{
		while (i < index)
		{
			num = a + b;
			a = b;
			b = num;
			i++;
		}
	}
	return (num);
}
/*
int main(void)
{
    printf("%d", ft_fibonacci(21));
    return (0);
}
*/