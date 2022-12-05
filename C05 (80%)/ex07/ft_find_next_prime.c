/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:21:12 by soda-sil          #+#    #+#             */
/*   Updated: 2022/10/12 17:50:44 by soda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}

#include <stdio.h>
int		main(void)
{
	printf("-10 -> %d (2)\n", ft_find_next_prime(-10));
	printf(" 0 -> %d (2)\n", ft_find_next_prime(0));
	printf(" 1 -> %d (2)\n", ft_find_next_prime(1));
	printf(" 2 -> %d (2)\n", ft_find_next_prime(2));
	printf(" 3 -> %d (3)\n", ft_find_next_prime(3));
	printf(" 4 -> %d (5)\n", ft_find_next_prime(4));
	printf(" 5 -> %d (5)\n", ft_find_next_prime(5));
	printf(" 6 -> %d (7)\n", ft_find_next_prime(6));
	printf(" 7 -> %d (7)\n", ft_find_next_prime(7));
	printf(" 8 -> %d (11)\n", ft_find_next_prime(8));
	printf(" 9 -> %d (11)\n", ft_find_next_prime(9));
	printf(" 10 -> %d (11)\n", ft_find_next_prime(10));
	printf(" 2147483643 -> %d (2147483647)\n", ft_find_next_prime(2147483643));
}
