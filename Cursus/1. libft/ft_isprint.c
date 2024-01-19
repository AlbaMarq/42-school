/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:08:16 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/19 17:09:19 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
int main(void) 
{
    char miCaracter = 'A';
	
	printf("Funcion original:");
    if (isprint(miCaracter))
		printf("%c es un carácter imprimible.\n", miCaracter);
	else
		printf("%c no es un carácter imprimible.\n", miCaracter);
	
	printf("Mi funcion:");
    if (ft_isprint(miCaracter)) 
        printf("%c es un carácter imprimible.\n", miCaracter);
	else
        printf("%c no es un carácter imprimible.\n", miCaracter);
    
	return 0;
}
*/