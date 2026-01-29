/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:40:58 by aneves            #+#    #+#             */
/*   Updated: 2025/11/11 20:44:24 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)(haystack + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/* 
#include <stdio.h>

int main(void)
{
	const char haystack[] = "adriana";
	const char needle[] = "dri";
	char *result;
	char *res_2;

	result = ft_strnstr(haystack, needle, sizeof(haystack));
	res_2 = strstr(haystack, needle);
	printf("%s\n", result);
	printf("%s\n", res_2);
	return (0);
} */