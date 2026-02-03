/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:47:20 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:23:59 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
	{
		return (1);
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
	char x;
	int	i;
	int	j;
	
	x = 'ü';
	i = ft_isascii(x);
	j = isascii(x);

	printf("%d\n", i);
	printf("%d\n", j);


	if(ft_isascii(x))
		printf("%c is ascii\n", x);
	else
		printf("%c is not ascii\n", x);
	return(0);
} */