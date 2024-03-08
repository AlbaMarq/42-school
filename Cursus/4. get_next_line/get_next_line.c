/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:31:00 by albmarqu          #+#    #+#             */
/*   Updated: 2024/03/08 19:01:20 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*next_line;
	int		num_read;

	next_line = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (next_line == NULL)
		return (NULL);
	num_read = read (fd, next_line, BUFFER_SIZE);
	
	return (NULL);
}

int	main(void)
{
	const char	*camino;
	int			flags;
	int			fd;
	char		*next_line;

	camino = "hola.txt";
	flags = O_RDONLY;
	fd = open (camino, flags);
	next_line = get_next_line(fd);
	printf(next_line);
	return (0);
}
