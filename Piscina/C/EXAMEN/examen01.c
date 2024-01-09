// NOTA: Los enunciados de los ejercicios son aproximados !!!

// NIVEL 0: aff_t.c
/* Escribe in programa que dice que imprimas t y salto de linea en todos los casos que te ponen. */

#include <unistd.h>

int	main(void)
{
	write(1, "t", 1);
	write(1, "\n", 1);
	return (0);
}

// NIVEL 1: even.c
/* Escribe un programa que imprima los numeros pares del 0 al 10, seguido de un salto de linea. */

#include <unistd.h>

int	main(void)
{
	write(1, "0246810", 7);
	write(1, "\n", 1);
	return (0);
}

// NIVEL 2: print_odd.c
/* Escribe un programa que imprima los caracteres en posicion impar de un string, seguido de un salto de 
linea. Si el numero de argumentos no es 1, o no hay argumentos, imprime un salto de linea. */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (i % 2 != 0)
				write(1, &argv[1][i], 7);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// NIVEL 3: ozz_z.c
/* Escribe una funcion que devuelva la cantidad de caracteres 'Z' que se encuentren en un string. */

int	occ_z(char *str)
{
	int	z;

	z = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'Z')
			z++;
		i++;
	}
	return (z);
}

// NIVEL 4: ft_putnbr.c

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb >= 10)
			ft_putnbr((nb / 10));
		nb = (nb % 10) + '0';
		write (1, &nb, 1);
	}
}

// NIVEL 5: aff_first_param.c
/* Escribe un programa que reciba strings como argumentos e imprima el primer argumento seguido
de un salto de linea. Si el numero de argumentos es menor que 1, imprime un salto de linea. */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		while (argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 7);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// NIVEL 6: is_palindrome.c
/* Escribe un programa que reciba un string. Si el string es un palindromo, mostrarlo. Si el 
numero de argumentos es distinto que 1 o no es un palindromo, muestra un salto de linea. */

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		size = strlen(argv[1])
		while (argv[1][i] != '\0' && i < (size/2))
		{
			if (argv[1][i] != argv[1][size - i - 1])
			{
				write(1, "\n", 1);
				return (0);
			}
			i++;
		}
		i = 0;
		while (argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 7);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

// NIVEL 7: count_words.c
/* Escribe una funcion que reciba un string, lo divida en palabras y devuelva un entero con el
numero de palabras que hay en el string. 
Una palabra es una porcion de string delimitado por espacios o por el principio y final del string. */

#include <stdio.h>

int	count_words(char *str)
{
	int	i;
	int	p;

	i = 1;
	p = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32 && str[i - 1] != 32)
			p++;
		i++;
	}
	if (i > 1 && str[i - 1] != 32)
		p++;
	return (p);
}
/*
int main()
{
    printf("%d\n", count_words(""));
    return (0);
}
*/