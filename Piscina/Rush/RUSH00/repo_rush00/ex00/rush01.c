/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danmoren <danmoren@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:43:51 by danmoren          #+#    #+#             */
/*   Updated: 2023/10/29 19:16:47 by danmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	letra_bc(int x, int y, int i, int j)
{
	if ((j == x && i == 1) || (j == 1 && i == y))
		ft_putchar('\\');
	else if ((j > 1 && j < x && i == 1) || (i == y && j < x && j > 1))
		ft_putchar('*');
	else if ((i > 1 && i < y && j == 1) || (j == x && i > 1 && i < y))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (x >= 0 && y >= 0)
	{
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
				if ((i == 1 && j == 1) || (i == y && j == x))
					ft_putchar('/');
				else
					letra_bc(x, y, i, j);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	else
		write(1, "Fatal error", 11);
}
