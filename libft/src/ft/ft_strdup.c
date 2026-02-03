/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:37:36 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:26:05 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strdup(const char *c)
{
	int		i;
	char	*copy;

	i = 0;
	copy = ft_calloc(ft_strlen(c) + 1, sizeof(char));
	if (!copy)
		return (NULL);
	while (c[i])
	{
		copy[i] = c[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/* #include <unistd.h>

int	main(void)
{
	char c[] = "Adriana";
	char *copy;

	copy = ft_strdup(c);
	write(1, copy, ft_strlen(copy));
	write(1, "\n", 1);
	free(copy);
	return (0);
} */