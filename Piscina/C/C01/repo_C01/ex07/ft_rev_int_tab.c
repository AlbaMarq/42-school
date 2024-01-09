/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:52:23 by albmarqu          #+#    #+#             */
/*   Updated: 2023/10/31 18:20:17 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	s;
	int	aux;

	i = 0;
	j = 0;
	s = size - 1;
	aux = 0;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[s];
		tab[s] = aux;
		s--;
		i++;
	}
}
/*
int main(void)
{
    int tab[] = {1,2,3,4,5,6,7,8};
    int size = 8;
    int i = 0;
    int j = 0;

    printf("Inicial: ");
    while (i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
    ft_rev_int_tab(tab, size);
    printf("\nFinal: ");
    while (j < size)
    {
        printf("%d", tab[j]);
        j++;
    }
    return (0);
}
*/
