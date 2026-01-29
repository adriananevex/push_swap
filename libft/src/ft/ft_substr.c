/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:42:11 by aneves            #+#    #+#             */
/*   Updated: 2025/11/11 22:57:50 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *c, unsigned int start, size_t len)
{
	size_t	atual_len;
	char	*sub;
	size_t	i;

	if (!c)
		return (NULL);
	if (start >= ft_strlen(c))
		return (ft_strdup(""));
	if (len > ft_strlen(c + start))
		atual_len = ft_strlen(c + start);
	else
		atual_len = len;
	sub = (char *)ft_calloc(atual_len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < atual_len)
	{
		sub[i] = c[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/* #include <stdio.h>

int main(void)
{
	const char c[] = "Adriana Elisa Neves";
	unsigned int start = 8;
	size_t len = 5;
	char *result;
	
	result = ft_substr(c, start, len);
	printf("Word: %s\n", c);
	printf("Sub: %s\n", result);
	return (0);
} */