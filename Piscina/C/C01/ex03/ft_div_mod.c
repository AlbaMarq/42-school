/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:55:57 by albmarqu          #+#    #+#             */
/*   Updated: 2023/10/30 20:18:30 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 0;
    b = 0;
    div = 0;
    mod = 0;
    if (b == 0)
        printf("∞");
    else
    {
        ft_div_mod(a, b, &div, &mod);
        printf("Cociente: %d", div);
        printf("\n");
        printf("Resto: %d", mod);
    }
    return (0);
}
*/
