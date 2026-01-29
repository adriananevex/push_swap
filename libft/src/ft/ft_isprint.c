/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:08:01 by aneves            #+#    #+#             */
/*   Updated: 2025/11/03 23:32:14 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
	{
		return (16384);
	}
	else
	{
		return (0);
	}
}

/* #include <stdio.h>
#include <ctype.h>

int main(void)
{
	int x;
	int	i;
	int	j;
	
	x = 120;
	i = ft_isprint(x);
	j = isprint(x);

	printf("%d\n", i);
	printf("%d\n", j);
	
	if (ft_isprint(x))
		printf("%d is printable\n", x);
	else
		printf("%d is not printable\n", x);
	return(0);
} */