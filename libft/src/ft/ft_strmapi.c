/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:45:49 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:26:31 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>

char	to_upper_mapi(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return c - 32;
	return c;
}

int	main(void)
{
	char str[] = "adriana";
	char *result;
	
	result = ft_strmapi(str, to_upper_mapi);
	printf("%s\n", result);
	free(result);
	return (0);
} */