/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:29:16 by aneves            #+#    #+#             */
/*   Updated: 2025/11/14 19:44:29 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s)
	{
		d += n;
		s += n;
		while (n > 0)
		{
			d--;
			s--;
			*d = *s;
			n--;
		}
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dst);
}

/* #include <stdio.h>

int main(void)
{
	char str1[] = "Adriana";
	char str2[] = "Adriana";
	char str3[] = "Adriana";

	ft_memcpy(str1 + 2, str1, 5);
	ft_memmove(str2 + 2, str2, 5);
	memmove(str3 + 2, str3, 5);

	printf("ft_memcpy:  %s\n", str1);
	printf("ft_memmove: %s\n", str2);
	printf("Original memmove: %s\n", str3);

	return 0;
} */