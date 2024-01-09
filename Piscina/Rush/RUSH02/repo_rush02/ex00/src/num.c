/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:04:08 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/12 23:03:59 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	while (*str != '\0')
		str++;
	return (str);
}

void	div(char *number, char *dict)
{
	int		i;
	char	num;
	char	num1;

	i = 0;
	while (i < ft_strlen(number))
	{
		if (
			i == 1 || i == 4 || i == 7 || i == 10 || i == 13 || i == 16
			|| i == 19 || i == 22 || i == 25 || i == 28 || i == 31
			|| i == 34 || i == 37
		)
		{
			num = ft_strcat(number[i], "0");
			ft_strstr(dict, number);
			// buscar en diccionario y printear
		}
		if (
			i == 2 || i == 5 || i == 8 || i == 11 || i == 14 || i == 17
			|| i == 20 || i == 23 || i == 26 || i == 29 || i == 32
			|| i == 35 || i == 38
		)
		{
			num = number[i];
			num1 = "100";
			// buscar en diccionario y printear
		}
		if (i == 0)
		{
			num = number[i];
			// buscar en diccionario y printear
		}
		if (i == 3)
		{
			num = number[i];
			num1 = "1000";
			// buscar en diccionario y printear
		}
		if (i == 6)
		{
			num = number[i];
			num1 = "1000000";
			// buscar en diccionario y printear
		}
		if (i == 9)
		{
			num = number[i];
			num1 = "1000000000";
			// buscar en diccionario y printear
		}
		if (i == 12)
		{
			num = number[i];
			num1 = "1000000000000";
			// buscar en diccionario y printear
		}
		if (i == 15)
		{
			num = number[i];
			num1 = "1000000000000000";
			// buscar en diccionario y printear
		}
		if (i == 18)
		{
			num = number[i];
			num1 = "1000000000000000000";
			// buscar en diccionario y printear
		}
		if (i == 21)
		{
			num = number[i];
			num1 = "1000000000000000000000";
			// buscar en diccionario y printear
		}
		if (i == 24)
		{
			num = number[i];
			num1 = "1000000000000000000000000";
			// buscar en diccionario y printear
		}
		if (i == 27)
		{
			num = number[i];
			num1 = "1000000000000000000000000000";
			// buscar en diccionario y printear
		}
		if (i == 30)
		{
			num = number[i];
			num1 = "1000000000000000000000000000000";
			// buscar en diccionario y printear
		}
		if (i == 33)
		{
			num = number[i];
			num1 = "1000000000000000000000000000000000";
			// buscar en diccionario y printear
		}
		if (i == 36)
		{
			num = number[i];
			num1 = "1000000000000000000000000000000000000";
			// buscar en diccionario y printear
		}
		i++;
	}
}
*/