/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:16:54 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:26:54 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_tolower(int i)
{
	if (i >= 65 && i <= 90)
	{
		i += 32;
	}
	return (i);
}

/* #include <stdio.h>

int	main(void)
{
	char	c;
	int i;
	c = 'A';
	i = ft_tolower(c);

	printf("%c\n", i);
	return (0);
} */