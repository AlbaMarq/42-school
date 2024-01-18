/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:50:38 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/18 19:26:48 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b1;

	b1 = (unsigned char *)b;
	while (len > 0)
	{
		b1[len - 1] = (unsigned char)c;
		len--;
	}
	return (b);
}
