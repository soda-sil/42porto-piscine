/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:49:20 by soda-sil          #+#    #+#             */
/*   Updated: 2022/10/11 15:52:26 by soda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	finallength(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_str_length(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	string = (char *)malloc(((finallength(strs, size, ft_str_length(sep)))
				+ 1) * sizeof(char));
	d = string;
	if (!d)
		return (0);
	index = 0;
	while (index < size)
	{
		ft_strcpy(d, strs[index]);
		d += ft_str_length(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_str_length(sep);
		}
		index++;
	}
	*d = '\0';
	return (string);
}
/*
int	main(void)
{
	char	**strs;
	char	*separator;
	int	size;
	char	*result;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 9 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 22 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[0] = "42School";
	strs[1] = "Porto";
	strs[2] = "By FiFi da Silba";
	separator = "/";
	result = ft_strjoin(size, strs, separator);
	printf("%s\n", result);
	free(result);
}
*/
