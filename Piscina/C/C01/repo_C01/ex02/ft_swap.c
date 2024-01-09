/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:31:48 by albmarqu          #+#    #+#             */
/*   Updated: 2023/10/30 20:16:24 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	a_aux;

	a_aux = *a;
	*a = *b;
	*b = a_aux;
}
/*
int main(void)
{
    int a;
    int b;

    a = 4;
    b = 1;
    ft_swap(&a, &b);
    printf("a: %d", a);
    printf("\n");
    printf("b: %d", b);
    return (0);
}
*/
