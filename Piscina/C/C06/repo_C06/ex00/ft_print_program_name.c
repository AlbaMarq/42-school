/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:38:24 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/14 16:19:46 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	a;

	i = 0;
	if (argc >= 1)
	{
		while (argv[0][i])
		{
			a = argv[0][i];
			write(1, &a, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
