/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:22:48 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/06 19:52:58 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			div_hex;
	char			mod_hex;
	char			*hex;
	unsigned char	*ustr;

	ustr = (unsigned char *) str;
	i = 0;
	div_hex = 0;
	mod_hex = 0;
	hex = "0123456789abcdef";
	while (*ustr != '\0')
	{
		if (*ustr < 32 || *ustr > 126)
		{
			div_hex = hex[*ustr / 16];
			mod_hex = hex[*ustr % 16];
			write(1, "\\", 1);
			write(1, &div_hex, 1);
			write(1, &mod_hex, 1);
		}
		else
			write(1, &ustr[i], 1);
		ustr++;
	}
}
/*
int main(void)
{
    char str[] = "Coucou\ntu vças bien ?";
    ft_putstr_non_printable(str);
    return (0);
}
*/
