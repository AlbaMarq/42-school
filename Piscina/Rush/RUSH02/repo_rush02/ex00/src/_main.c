/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:26:31 by ffranco-          #+#    #+#             */
/*   Updated: 2023/11/12 23:29:08 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "validation.h"
#include "get_dict_val.h"

char	*open_dict(char *ref_dict_path);
char	*find_dict(char number, char *dict);
char	*ft_file_get_contents(char *pathname);

int	main(int nargs, char *args[])
{
	char	*ref_dict_path;
	char	*dict;
	char	*number;
	char	*translation;

	if (!ft_valid_args(nargs, args))
		return (1);
	if (nargs == 3)
	{
		number = args[2];
		ref_dict_path = args[1];
	}
	else
	{
		number = args[1];
		ref_dict_path = "numbers.dict";
	}
	dict = open_dict(ref_dict_path);
	translation = ft_get_dict_val(dict, number);
	printf("%s", translation);
	return (0);
}