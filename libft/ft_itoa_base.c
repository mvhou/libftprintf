/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <mvan-hou@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/15 20:24:36 by mvan-hou       #+#    #+#                */
/*   Updated: 2019/08/15 21:11:10 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_getsize(long n, int base)
{
	int		size;

	size = 1;
	if (n < 0)
	{
		n = n * -1;
		size++;
	}
	while (n >= base)
	{
		n /= base;
		size++;
	}
	printf("size = %d\n", size);
	return (size);
}

long	ft_negative_number(char *str, long nbr)
{
	*str = '-';
	return (nbr * -1);
}

int		ft_get_first(char *str, long nbr, int base)
{
	int i;

	i = 1;
	while (nbr >= base)
	{
		nbr /= base;
		i *= base;
	}
	*str = nbr + '0';
	return (nbr * i);
}

char	*ft_itoa_base(int n, int base)
{
	char	*str;
	char	*lol;
	long	nbr;
	int		size;
	int		i;

	nbr = n;
	i = 0;
	size = ft_getsize((long)n, base);
	str = (char*)malloc(size + 1);
	lol = str;
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		nbr = ft_negative_number(&*str, nbr);
		str++;
	}
	while (i < size)
	{
		printf("i = %d\n", i);
		nbr -= ft_get_first(&*str, nbr, base);
		str++;
		i++;
	}
	return (lol);
}

int		main(void)
{
	int		nbr = 100;
	int		base = 8;
	printf("%s", ft_itoa_base(nbr, base));
	return (0);	
}