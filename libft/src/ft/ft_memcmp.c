/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:36:33 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:25:28 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t			i;
	int				dif;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	dif = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		if (t1[i] != t2[i])
		{
			dif = t1[i] - t2[i];
			return (dif);
		}
		i++;
	}
	return (dif);
}

/* #include <stdio.h>

int main(void)
{
	char s1[] = "Hello, World!";
	char s2[] = "Hello, Wurld!";
	size_t n;
	int dif;
	
	n = 9;
	dif = ft_memcmp(s1, s2, n);
	printf("%d\n", dif);
	return (0);
} */