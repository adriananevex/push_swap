/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:35:56 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:26:16 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	copy = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!copy)
	{
		return (NULL);
	}
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		copy[i + j] = s2[j];
		j++;
	}
	copy[i + j] = '\0';
	return (copy);
}

/* #include <unistd.h>

int	main(void)
{
	char *s1 = "Adriana ";
	char *s2 = "Elisa";
	char *copy;

	copy = ft_strjoin(s1, s2);
	write (1, copy, ft_strlen(copy));
	write (1, "\n", 1);
	free(copy);
	return (0);
} */