/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:33:37 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:25:21 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"


static int	count_num(int n)
{
	int		i;
	long	num;

	i = 0;
	num = n;
	if (num <= 0)
	{
		i++;
		num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*num;
	long	l;
	int		len;

	l = n;
	len = count_num(n);
	num = ft_calloc((len + 1), sizeof(char));
	if (!num)
		return (NULL);
	if (l < 0)
	{
		num[0] = '-';
		l = -l;
	}
	else if (l == 0)
	{
		num[0] = '0';
		return (num);
	}
	while (l > 0)
	{
		num[--len] = (l % 10 + '0');
		l /= 10;
	}
	return (num);
}

/* #include <stdio.h>

int	main(void)
{
	int n;
	char *c;
	
	n = -152589;
	c = ft_itoa(n);
	printf("%s\n", c);
	free(c);
	return 0;
} */