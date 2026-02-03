/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neves <neves@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 21:43:37 by aneves            #+#    #+#             */
/*   Updated: 2026/02/03 00:25:50 by neves            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num;
	long	ln;

	ln = n;
	if (fd < 0)
		return ;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln = -ln;
	}
	if (ln >= 10)
	{
		ft_putnbr_fd((ln / 10), fd);
	}
	num = (ln % 10) + '0';
	ft_putchar_fd(num, fd);
}

/* int	main(void)
{
	int n;

	n = 17845;
	ft_putnbr_fd(n, 1);
	ft_putchar_fd('\n', 1);
	return (0);
} */