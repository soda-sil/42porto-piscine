/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:27:07 by soda-sil          #+#    #+#             */
/*   Updated: 2022/10/11 15:05:41 by soda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*res;
	int	i;

	i = 0;
	range = max - min;
	res = (int *) malloc(range * sizeof(int));
	if (min >= max)
	{
		return (0);
	}
	while (i < range)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
