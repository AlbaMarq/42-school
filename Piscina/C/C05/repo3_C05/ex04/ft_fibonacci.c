/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:16:04 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/14 17:28:13 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;
	int	num;

	i = 2;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	num = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (num);
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(21));
	return (0);
}
*/