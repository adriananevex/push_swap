/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:35:33 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:24:17 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
	{
		return (2048);
	}
	else
	{
		return (0);
	}
}

/* #include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;
	int		i;
	int		j;
 
	c = '6';
	i = ft_isdigit(c);
	j = isdigit(c);
	
	printf("%d\n", i);
	printf("%d\n", j); 
	
	if (ft_isdigit(c))
		printf("%c is a number.\n", c);
	else
		printf("%c is not a number.\n", c);
	return (0);
} */