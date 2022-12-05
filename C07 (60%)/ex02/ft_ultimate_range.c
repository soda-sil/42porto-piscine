/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:32:23 by soda-sil          #+#    #+#             */
/*   Updated: 2022/10/11 15:19:14 by soda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*res;
	int	i;
	int	dif;

	dif = max - min;
	if (min >= max)
		return (0);
	res = (int *)malloc(dif * sizeof(int));
	if (!res)
		return (-1);
	i = 0;
	*range = res;
	while (i < dif)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (dif);
}
/*
int main()
{
	int	*array;

	printf("%d", ft_ultimate_range(&array, 20, 35));
}
*/
