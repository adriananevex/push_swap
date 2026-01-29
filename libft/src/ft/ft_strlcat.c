/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:36:31 by aneves            #+#    #+#             */
/*   Updated: 2025/11/14 19:01:05 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	dst_final;
	size_t	src_size;

	i = 0;
	dst_final = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dst_size <= dst_final)
		return (dst_size + src_size);
	while (src[i] && dst_final + i < dst_size - 1)
	{
		dst[dst_final + i] = src[i];
		i++;
	}
	dst[dst_final + i] = '\0';
	return (dst_final + src_size);
}
/* 
#include <stdio.h>

int	main(void)
{
	char dst[20] = "Adriana Elisa ";
	char src[] = "Neves";
	size_t	result;

	printf("%s\n%s\n", dst, src);
	result = ft_strlcat(dst, src, sizeof(dst));
	printf("%s\n", dst);
	printf("%zu\n", result);
	return (0);
} */