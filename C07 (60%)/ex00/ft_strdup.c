/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:12:21 by soda-sil          #+#    #+#             */
/*   Updated: 2022/10/11 15:04:27 by soda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
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

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
	{
		return (0);
	}
	ft_strcpy(dest, src);
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char *test;
	char *dup;

	test = "ora bem, sempre ouvi dizer que 3x9=27";
	printf("Vamos dar print a copia da string que foi definida.\n");
	dup = ft_strdup(test);
	printf("Print pretendido:  %s\n", test);
	printf("Print recebido:	%s\n", dup);
	free(dup);
}
*/
