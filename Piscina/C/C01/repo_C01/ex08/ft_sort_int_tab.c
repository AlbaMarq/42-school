/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:20:57 by albmarqu          #+#    #+#             */
/*   Updated: 2023/10/31 18:51:14 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}
/*
int main(void)
{
    int tab[] = {4,2,5,7,1,3,8,6};
    int size = 8;
    int i = 0;
    int j = 0;

    printf("Inicial: ");
    while (i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
    ft_sort_int_tab(tab, size);
    printf("\nFinal: ");
    while (j < size)
    {
        printf("%d", tab[j]);
        j++;
    }
    return (0);
}
*/
