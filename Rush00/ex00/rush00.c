/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 11:16:00 by soda-sil          #+#    #+#             */
/*   Updated: 2022/09/25 10:46:40 by soda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);

void	ft_first(int x, int y)
{
	int	c;
	int	l;

	l = 1;
	if (l == 1 && y != 0)
		c = 1;
	while (c <= x)
	{
		if (c == 1)
			ft_putchar('o');
		else if (c < x)
			ft_putchar('-');
		else
			ft_putchar('o');
		c++;
	}
	ft_putchar('\n');
	l++;
}

void	ft_middle(int x, int y)
{
	int	c;
	int	l;

	l = 2;
	while (l < y)
	{
		c = 1;
		while (c <= x)
		{
			if (c == 1)
				ft_putchar('|');
			else if (c < x)
				ft_putchar(' ');
			else
				ft_putchar('|');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}

void	ft_last(int x, int y)
{
	int	c;

	if (y != 0)
	{
		c = 1;
		while (c <= x)
		{
			if (c == 1)
				ft_putchar('o');
			else if (c < x)
				ft_putchar('-');
			else
				ft_putchar('o');
			c++;
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		ft_first(x, y);
		ft_middle(x, y);
		ft_last(x, y);
	}
}
