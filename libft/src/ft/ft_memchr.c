/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:35:56 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:25:25 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memchr(const void *c, int i, size_t n)
{
	unsigned char	*s;
	unsigned char	t;
	size_t			j;

	s = (unsigned char *)c;
	t = (unsigned char)i;
	j = 0;
	while (j < n)
	{
		if (s[j] == t)
		{
			return ((void *)&s[j]);
		}
		j++;
	}
	return (NULL);
}

/* #include <stdio.h>

int main(void)
{
	char	c[] = "Hello, word!";
	char	*res;

	res = ft_memchr(c, 'r', ft_strlen(c));
	
	if (res != NULL)
	{
		printf("found: %c\n", *res);
	}
	else
	{
		printf("nothing found.\n");
	}
	return (0);
} */