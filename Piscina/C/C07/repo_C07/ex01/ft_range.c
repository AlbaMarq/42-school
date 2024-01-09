/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:19:28 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/16 19:53:54 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	dest = malloc((max - min) * sizeof(int));
	if (dest == NULL)
		return (0);
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	int i = 0;
	int *result; 
	result = ft_range(0, 5);
	while (i < 5)
	{
		printf("%d", result[i]);
		i++;
	}
	return (0);
}
	*/