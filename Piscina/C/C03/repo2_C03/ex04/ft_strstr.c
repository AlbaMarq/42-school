/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:22:49 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/08 16:17:55 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	find_len;
	int	i;
	int	j;
	int	igual;

	find_len = ft_strlen(to_find);
	i = 0;
	igual = 0;
	if (find_len == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			igual++;
			if (igual == find_len - 1)
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    char str[] = "holac, como estas?";
    char find[] = "casa";
    char *str2;

    str2 = ft_strstr(str, find);
    printf("%s\n", str2);
    return (0);
}
*/
