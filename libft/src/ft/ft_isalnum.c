/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:35:25 by aneves            #+#    #+#             */
/*   Updated: 2025/11/03 23:11:42 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if (ft_isalpha(i) || ft_isdigit(i))
	{
		return (8);
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
 
	c = 'a';
	i = ft_isalnum(c);
	j = isalnum(c);
	
	printf("%d\n", i);
	printf("%d\n", j);
	
	if (ft_isalnum(c))
		printf("%c is alphanumeric.\n", c);
	else
		printf("%c is not alphanumeric.\n", c);
	return (0);
} */