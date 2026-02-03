/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:40:15 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:26:34 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_strncmp(const char *c1, const char *c2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (c1[i] && c2[i] && i < n && c1[i] == c2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)c1[i] - (unsigned char)c2[i]);
}

/* #include <stdio.h>

int	main(void)
{
	char s1[] = "Adriana Elisa";
	char s2[] = "Adriana Elisa Reis Alves";
	size_t	n;

	n = 20;
	printf("%s\n%s\n", s1, s2);
	ft_strncmp(s1, s2, n);
	printf("%d\n", ft_strncmp(s1, s2, n));
} */