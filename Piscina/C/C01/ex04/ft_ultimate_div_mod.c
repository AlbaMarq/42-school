/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:19:57 by albmarqu          #+#    #+#             */
/*   Updated: 2023/10/30 20:29:59 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_aux;

	a_aux = *a;
	*a = *a / *b;
	*b = a_aux % *b;
}
/*
int main(void)
{
    int a;
    int b;

    a = -4;
    b = 2;
    if (b == 0)
        printf("∞");
    else
    {
        ft_ultimate_div_mod(&a, &b);
        printf("Cociente: %d", a);
        printf("\n");
        printf("Resto: %d", b);
    }
    return (0);
}
*/
