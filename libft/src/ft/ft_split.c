/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:14:19 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:25:58 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			w++;
			while (s[i] && s[i] != c)
			{
				i++;
			}
		}
		else
			i++;
	}
	return (w);
}

static char	*word_dup(const char *s, char c)
{
	char	*w;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	w = ft_calloc(i + 1, sizeof(char));
	if (!w)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		w[i] = s[i];
		i++;
	}
	w[i] = '\0';
	return (w);
}

static void	*free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return (NULL);
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**result;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	result = ft_calloc((count_word(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j++] = word_dup(&s[i], c);
			if (!result[j - 1])
				return (free_split(result));
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (result);
}

/* #include <stdio.h>

int 	main(void)
{
	char **result;
	int	i;
	
	i = 0;
	
	result = ft_split("hello how are you", ' ');
	while (result[i])
	{
		printf("word %d: %s\n", i, result[i]);
		i++;
	}
	return(0);
} */