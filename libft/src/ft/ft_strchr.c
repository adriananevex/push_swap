/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:20:48 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:26:01 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strchr(const char *s, int i)
{
	unsigned char	d;
	size_t			j;

	j = 0;
	d = (unsigned char)i;
	while (1)
	{
		if ((unsigned char)s[j] == d)
		{
			return ((char *)&s[j]);
		}
		if (s[j] == '\0')
		{
			return (NULL);
		}
		j++;
	}
	return (NULL);
}

/* #include <stdio.h>

int main(void)
{
	char s[] = "Adriana";
	char i;
	char *r;

	i = 'i';
	r = ft_strchr(s, i);
	printf("%c\n", *r);
	return (0);
} */