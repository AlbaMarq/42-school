/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:02:24 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/19 17:09:27 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*
int main(void) 
{
    char miCaracter = 'A';
	
	printf("Funcion original:");
    if (isalnum(miCaracter))
		printf("%c es un carácter alfanumérico.\n", miCaracter);
	else
		printf("%c no es un carácter alfanumérico.\n", miCaracter);
	
	printf("Mi funcion:");
    if (ft_isalnum(miCaracter)) 
        printf("%c es un carácter alfanumérico.\n", miCaracter);
	else
        printf("%c no es un carácter alfanumérico.\n", miCaracter);
    
	return 0;
}
*/