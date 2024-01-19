/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:07:45 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/19 17:09:35 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int main(void) 
{
    char miCaracter = 'A';
	
	printf("Función original:");
    if (isdigit(miCaracter))
		printf("%c es un dígito.\n", miCaracter);
	else
		printf("%c no es un dígito.\n", miCaracter);
	
	printf("Mi función:");
    if (ft_isdigit(miCaracter)) 
        printf("%c es un dígito.\n", miCaracter);
	else
        printf("%c no es un dígito.\n", miCaracter);
    
	return 0;
}
*/