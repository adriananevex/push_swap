/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:25:07 by aneves            #+#    #+#             */
/*   Updated: 2025/11/09 19:26:28 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int i, size_t len)
{
	unsigned char	*c;
	size_t			j;

	j = 0;
	c = (unsigned char *)b;
	while (j < len)
	{
		c[j] = (unsigned char)i;
		j++;
	}
	return (b);
}

/* #include <stdio.h>

int main(void)
{
	char    texto[10];

	ft_memset(texto, 'A', 9);
	texto[9] = '\0';

	printf("result = %s\n", texto);

	return 0;
} */