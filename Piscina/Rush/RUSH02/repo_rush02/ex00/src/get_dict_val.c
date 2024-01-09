/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dict_val.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:22:49 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/12 23:36:08 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

int	ft_find_str_check_match(char *str_match, char *to_find)
{
	int	to_find_len;
	int	i_match;

	to_find_len = ft_strlen(to_find);
	i_match = 0;
	while (i_match < to_find_len)
	{
		if (
			str_match[i_match] || to_find[i_match]
			|| str_match[i_match] != to_find[i_match]
		)
		{
			break ;
		}
		i_match++;
	}
	return (i_match == to_find_len - 1);
}

int	ft_find_str(char *str, char *to_find)
{
	int	i_str;

	i_str = 0;
	while (str[i_str])
	{
		if (
			str[i_str] == to_find[0]
			&& ft_find_str_check_match(&str[i_str], to_find)
		)
		{
			return (i_str);
		}
		i_str++;
	}
	return (-1);
}

char	*ft_get_dict_line_val(char *dict_line)
{
	int		i_start;
	int		i_end;
	int		i_store;
	char	*value;

	i_start = 0;
	while (dict_line[i_start] != ':')
		i_start++;
	i_start++;
	while (dict_line[i_start] == ' ')
		i_start++;
	i_end = i_start;
	while (dict_line[i_end] != '\n' || dict_line[i_end] != '\0')
		i_end++;
	value = (char *) malloc(i_end - i_start + 1);
	i_store = 0;
	while (i_store + i_start < i_end)
	{
		value[i_store] = dict_line[i_store + i_start];
		i_store++;
	}
	value[i_store] = '\0';
	return (value);
}

char	*ft_get_dict_val(char *dict, char *number)
{
	int	i_dict;
	int	i_match;

	i_dict = 0;
	i_match = ft_find_str(&dict[i_dict], number);
	while (i_match != -1)
	{
		if (
			(i_match == 0 || dict[i_match - 1] == '\n')
			&& !ft_is_nbr(dict[i_match + 1])
		)
		{
			return (ft_get_dict_line_val(&dict[i_match]));
		}
		i_match = ft_find_str(&dict[i_dict], number);
	}
	return ("no encontrado");
}
