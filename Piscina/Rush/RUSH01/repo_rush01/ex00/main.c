/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:28:15 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/05 23:28:22 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	input_validation(char *str);
int	board(void);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (input_validation(argv[1]))
			return (0);
		board();
	}
	else
		write(1, "Error, more than 1 argument", 27);
	return (0);
}
