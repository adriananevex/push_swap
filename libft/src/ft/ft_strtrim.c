/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:49:16 by aneves            #+#    #+#             */
/*   Updated: 2025/11/11 22:46:35 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && in_set(s1[end], set))
		end--;
	trimmed = (char *)ft_calloc(end - start + 2, sizeof(char));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

/* #include <stdio.h>

int main(void)
{
	const char s1[] = "__Adriana____";
	const char *set = "_";
	char *result;

	result = ft_strtrim(s1, set);
	printf("Word: %s\n", s1);
	printf("Trimmed: %s\n", result);
	return (0);
} */