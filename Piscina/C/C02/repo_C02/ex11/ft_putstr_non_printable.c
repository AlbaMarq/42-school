/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:22:48 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/02 21:44:20 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	div_hex;
	char	mod_hex;
	char	*hex;

	i = 0;
	div_hex = 0;
	mod_hex = 0;
	hex = "0123456789abcdef";
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			div_hex = hex[*str / 16];
			mod_hex = hex[*str % 16];
			write(1, "\\", 1);
			write(1, &div_hex, 1);
			write(1, &mod_hex, 1);
		}
		else
			write(1, &str[i], 1);
		str++;
	}
}
/*
int main(void)
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    return (0);
}
*/
