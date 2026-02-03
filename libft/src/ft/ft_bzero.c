/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:27:16 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:23:44 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* #include <stdio.h>

int	main(void)
{
	char	text[7] = "adriana";
	int		i;

	i = 0;
	ft_bzero(text, 5);
	printf("result:\n");
	while(i < 7)
	{
		printf("%d ", text[i]);
		i++;
	}
	printf("\n");
	return(0);
} */