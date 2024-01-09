/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:21:09 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/11 14:54:34 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
int	ft_valid_dict_file(char *pathname)
{
	
}
*/

// write(1, "Dict Error\n", 11);

int ft_valid_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_valid_args(int nargs, char *args[])
{
	if (nargs != 2 && nargs != 3)
	{
		write(1, "Arg Error\n", 10);
		return (0);
	}
	else if (nargs == 2)
		ft_valid_number(args[1]);
	else if (nargs == 3)
		ft_valid_number(args[2]);
	return (1);
}