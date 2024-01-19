/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:06:50 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/19 17:09:32 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int main(void) 
{
    char miCaracter = 'A';
	
	printf("Funcion original:");
    if (isascii(miCaracter))
		printf("%c es un carácter ASCII.\n", miCaracter);
	else
		printf("%c no es un carácter ASCII.\n", miCaracter);
	
	printf("Mi funcion:");
    if (ft_isascii(miCaracter)) 
        printf("%c es un carácter ASCII.\n", miCaracter);
	else
        printf("%c no es un carácter ASCII.\n", miCaracter);
    
	return 0;
}
*/