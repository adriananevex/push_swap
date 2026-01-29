/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:36:44 by aneves            #+#    #+#             */
/*   Updated: 2025/11/11 20:16:52 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

/* #include <stdio.h>

int	main(void)
{
	char src[] = "Adriana";
	char dst[8];
	size_t len;

	len = ft_strlcpy(dst, src, sizeof(dst));

	printf("dst = '%s'\n", dst);
	printf("size of src = %zu\n", len);

	return (0);
} */