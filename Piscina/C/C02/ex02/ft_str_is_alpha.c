/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:30:18 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/01 18:43:42 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	val;

	i = 0;
	val = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			if (str[i] < 'a' || str[i] > 'z')
				return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
    int x;
    char str[] = "abc1d";
    x = ft_str_is_alpha(str);
    printf("%d", x);
    return (0);
}
*/
