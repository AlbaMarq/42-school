/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:35:10 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/10 22:23:46 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	concat(char a, char b, char c, char d)
{
	char	coma;
	char	esp;

	coma = ',';
	esp = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &esp, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
	{
		write(1, &coma, 1);
		write(1, &esp, 1);
	}
}

void	buclewhile(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					concat (a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	buclewhile(a, b, c, d);
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/