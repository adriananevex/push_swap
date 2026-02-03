/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:35:30 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:23:56 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
	{
		return (1024);
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
 
	c = 'A';
	i = ft_isalpha(c);
	j = isalpha(c);
	printf("%d\n", i);
	printf("%d\n", j);
	
	if (ft_isalpha(c))
		printf("%c is a letter.\n", c);
	else
		printf("%c is not a letter.\n", c);
	return (0);
} */