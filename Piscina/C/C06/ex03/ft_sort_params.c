/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmarqu <albmarqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 00:16:37 by albmarqu          #+#    #+#             */
/*   Updated: 2023/11/14 16:11:56 by albmarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_print_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	a;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			a = argv[j][i];
			write(1, &a, 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	int		j1;
	int		j2;
	char	*aux;

	j1 = 1;
	if (argc >= 1)
	{
		while (j1 < argc)
		{
			j2 = j1 + 1;
			while (j2 < argc)
			{
				if (ft_strcmp(argv[j1], argv[j2]) > 0)
				{
					aux = argv[j1];
					argv[j1] = argv[j2];
					argv[j2] = aux;
				}
				j2++;
			}
			j1++;
		}
		ft_print_params(argc, argv);
	}
	return (0);
}