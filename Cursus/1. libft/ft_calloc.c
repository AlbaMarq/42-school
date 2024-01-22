/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:49:01 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/22 19:04:23 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	int		i;

	i = count * size;
	dst = malloc(i);
	if (dst == NULL)
		return (NULL);
	while ((i - 1) >= 0)
	{
		dst[i - 1] = 0;
		i--;
	}
	return (dst);
}
