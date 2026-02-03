/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:36:49 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:26:27 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

/* #include <stdio.h>

int	main(void)
{
	const char *c = "adriana elisa";
	printf("%zu\n", ft_strlen(c));
	printf("%zu\n", strlen(c));
	return (0);
} */