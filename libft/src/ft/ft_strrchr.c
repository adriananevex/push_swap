/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:51:16 by aneves            #+#    #+#             */
/*   Updated: 2025/11/11 21:16:43 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *c, int i)
{
	unsigned char		d;
	const unsigned char	*p;
	size_t				len;

	d = (unsigned char)i;
	p = (const unsigned char *)c;
	len = ft_strlen(c);
	p += len;
	while (1)
	{
		if (*p == d)
		{
			return ((char *)p);
		}
		if (p == (const unsigned char *)c)
		{
			break ;
		}
		p--;
	}
	return (NULL);
}

/* #include <stdio.h>

int main(void)
{
	const char c[] = "adrianA";
	char i = 'a';
	char *result;

	result = ft_strrchr(c, i);
	printf("%C\n", *result);
	return (0);
} */