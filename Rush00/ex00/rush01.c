/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:16:00 by soda-sil          #+#    #+#             */
/*   Updated: 2022/09/25 10:41:02 by soda-sil         ###   ########.fr       */
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
			ft_putchar('/');
		else if (c < x)
			ft_putchar('*');
		else
			ft_putchar(92);
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
				ft_putchar('*');
			else if (c < x)
				ft_putchar(' ');
			else
				ft_putchar('*');
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
				ft_putchar(92);
			else if (c < x)
				ft_putchar('*');
			else
				ft_putchar('/');
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
