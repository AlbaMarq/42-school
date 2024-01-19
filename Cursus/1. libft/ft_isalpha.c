/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:06:22 by albmarqu          #+#    #+#             */
/*   Updated: 2024/01/19 17:09:30 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
int main(void) 
{
    char miCaracter = 'A';
	
	printf("Función original:");
    if (isalpha(miCaracter))
		printf("%c es una letra alfabética.\n", miCaracter);
	else
		printf("%c no es una letra alfabética.\n", miCaracter);
	
	printf("Mi función:");
    if (ft_isalpha(miCaracter)) 
        printf("%c es una letra alfabética.\n", miCaracter);
	else
        printf("%c no es una letra alfabética.\n", miCaracter);
    
	return 0;
}
*/