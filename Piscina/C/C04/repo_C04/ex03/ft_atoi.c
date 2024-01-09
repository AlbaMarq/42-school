/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:46:45 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/09 15:13:38 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	less;
	int	sint;

	i = 0;
	less = 0;
	sint = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			less++;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		sint = sint * 10;
		sint += str[i] - 48;
		i++;
	}
	if (less % 2 != 0)
		sint = sint * (-1);
	return (sint);
}
/*
int main(void)
{
    char str[] = " ---+--+1234ab567";
    printf("%d", ft_atoi(str));
    return (0);
}
*/