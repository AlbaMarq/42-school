/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 00:05:28 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/14 16:20:01 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	a;

	j = argc - 1;
	if (argc >= 1)
	{
		while (j >= 1)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				a = argv[j][i];
				write(1, &a, 1);
				i++;
			}
			write(1, "\n", 1);
			j--;
		}
	}
	return (0);
}
