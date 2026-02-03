/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:33:54 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:23:47 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
	{
		return (NULL);
	}
	if (!count || !size)
	{
		return (malloc(0));
	}
	total = count * size;
	ptr = malloc(total);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, total);
	return (ptr);
}

/* #include <stdio.h>

int main(void)
{
	int	*a;
	size_t n;
	size_t i;

	n = 6;
	i = 0;
	a = ft_calloc(n, sizeof(int));
	if (!a)
	{
		printf("fail\n");
		return (1);
	}
	while (i < n)
	{
		printf("a[%zu] = %d\n", i, a[i]);
		i++;
	}
	free(a);
	return (0);
} */