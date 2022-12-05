/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:16:00 by soda-sil          #+#    #+#             */
/*   Updated: 2022/09/24 17:03:53 by soda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);

void	primeira(int x, int y)
{
	int	c;
	int	l;

	l = 1;
	if (l == 1)
		c = 1;
	while (c <= x)
	{
		if (c == 1)
			ft_putchar('A');
		else if (c < x)
			ft_putchar('B');
		else
			ft_putchar('C');
		c++;
	}
	ft_putchar('\n');
	l++;
}

void	meio(int x, int y)
{
	int	c;
	int	l;

	while (l < y)
	{
		c = 1;
		while (c <= x)
		{
			if (c == 1)
				ft_putchar('B');
			else if (c < x)
				ft_putchar(' ');
			else
				ft_putchar('B');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}

void	ultima(int x, int y)
{
	int	c;
	int	l;

	if (l == y)
	{
		c = 1;
		while (c <= x)
		{
			if (c == 1)
				ft_putchar('C');
			else if (c < x)
				ft_putchar('B');
			else
				ft_putchar('A');
			c++;
		}
		ft_putchar('\n');
	}
	l++;
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		primeira(x, y);
		meio(x, y);
		ultima(x, y);
	}
}
