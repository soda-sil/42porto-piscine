/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:18:06 by soda-sil          #+#    #+#             */
/*   Updated: 2022/10/08 17:24:35 by soda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%i\n", ft_recursive_power(5, 3));
	printf("%i\n", ft_recursive_power(5, 0));
	printf("%i", ft_recursive_power(5, -3));
}
*/
