/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 21:06:40 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:25:42 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

/* int main(void)
{
	int	i;
	char c[] = "Adriana";

	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar_fd(c[i], 1);
		i++;
	}
	ft_putchar_fd('\n', 1);
	return (0);
} */