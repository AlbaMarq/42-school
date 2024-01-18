/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:57:56 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/18 20:02:42 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*c1;

	c1 = NULL;
	while (*s)
	{
		if (*s == (char)c)
			c1 = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (c1);
}
