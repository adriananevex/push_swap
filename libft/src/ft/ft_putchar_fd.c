/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves <aneves@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 21:06:40 by aneves            #+#    #+#             */
/*   Updated: 2025/11/08 19:48:09 by aneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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