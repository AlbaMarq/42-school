/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:31:00 by albmarqu          #+#    #+#             */
/*   Updated: 2024/04/18 21:57:49 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		next_line[BUFFER_SIZE + 1];
	static char	*storage;
	char		*join;
	char		*new_line;
	int			num_read;
	int			i;

	i = 0;
	join = ft_strdup(storage);
	//next_line = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	//if (next_line == NULL)
	//	return (NULL);
	while (!ft_strchr(storage, '\n'))
	{
		num_read = read (fd, next_line, BUFFER_SIZE); // Read devuelve el numero de caracteres que ha leido
		if (num_read <= 0)
			break;
		next_line[num_read] = '\0';
		join = ft_strjoin(storage, next_line);
		storage = ft_strdup(join);
	}
	if (ft_strchr(join, '\n') == NULL)
	{
		storage = NULL;
		return (join);
	}
	new_line = ft_substr(join, 0, ft_strchr(join, '\n') - join + 1);
	storage = ft_substr(join, ft_strchr(join, '\n') - join + 1, ft_strlen(join));
	return (new_line);
}
/*
int	main(void)
{
	const char	*camino;
	int			flags;
	int			fd;
	char		*next_line;

	camino = "hola.txt";
	flags = O_RDONLY;
	fd = open (camino, flags);
	while(next_line = get_next_line(fd)) // Numero que representa el lugar donde esta el archivo
		printf(next_line);
	return (0);
}
*/