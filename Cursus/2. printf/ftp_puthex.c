/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftp_puthex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:04:35 by albmarqu          #+#    #+#             */
/*   Updated: 2024/02/07 21:46:58 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ftp_puthex(unsigned long n, char cap, int bytes)
{
	char	*hex;

	if (cap == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (n >= 16)
		bytes += ftp_puthex((n / 16), cap, bytes);
	n = (n % 16);
	write(1, &hex[n], 1);
	bytes++;
	return (bytes);
}
