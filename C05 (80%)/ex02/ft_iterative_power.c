/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:05:10 by soda-sil          #+#    #+#             */
/*   Updated: 2022/10/08 17:15:36 by soda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
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
int	main(void)
{
	printf("%i\n", ft_iterative_power(5, 3));
	printf("%i\n", ft_iterative_power(5, 0));
	printf("%i", ft_iterative_power(5, -3));

}
*/
