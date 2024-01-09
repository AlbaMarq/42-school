/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:42:16 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/06 19:38:16 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	lower(char str1, char str2)
{
	if (str2 < '0' || str2 > 'z')
		str1 = str1 - 32;
	else if (str2 > '9' && str2 < 'A')
		str1 = str1 - 32;
	else if (str2 > 'Z' && str2 < 'a')
		str1 = str1 - 32;
	return (str1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[0] >= 'a' && str[0] <= 'z'))
			str[0] = str[0] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				str[i] = str[i] + 32;
			else if (str[i - 1] >= '0' && str[i - 1] <= '9')
				str[i] = str[i] + 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = lower(str[i], str[i - 1]);
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char str[] = "salut, comMent tu vas ? 42Mots quarante-deux; cinquante+et+un";
    printf("Inicial: %s", str);
    ft_strcapitalize(str);
    printf("\nFinal: %s", str);
    return (0);
}
*/