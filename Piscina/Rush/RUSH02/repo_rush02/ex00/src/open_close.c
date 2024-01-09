/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_close.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:41:56 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/12 23:28:41 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// STANDAR LIBRARIES
// read, write, open y close
#include <unistd.h>
#include <fcntl.h>
// malloc y free
#include <stdlib.h>
#include <stdio.h>


char	*open_dict(char *ref_dict_path)
{
	int		desc_dict;
	char	*buf_dict;
	ssize_t	num_bytes;

	buf_dict = (char *) malloc(4096);
	desc_dict = open(ref_dict_path, O_RDONLY);
	if (desc_dict == -1)
	{
		write(1, "error al abrir Dict Error\n", 26);
		return (0);
	}
	num_bytes = read(desc_dict, buf_dict, 4096);
	if (num_bytes == -1 || num_bytes == 0)
	{
		write(1, "error al leer Dict Error\n", 25);
		close(desc_dict);
		return (0);
	}
	close(desc_dict);
	return (buf_dict);
}

/* char	*find_dict(char *number, char *dict)
{
	char	*index;

	index = ft_strstr(dict, number);
	printf ("%s \n", index);
	return (index);
} */

/*
char	*ft_file_get_contents(char *pathname)
{
	char	*buffer;
	int		fd;

	buffer = (char *) malloc(4096);
	fd = open(pathname, O_RDONLY);
	read(fd, buffer, 4096);
	return (buffer);
}
*/