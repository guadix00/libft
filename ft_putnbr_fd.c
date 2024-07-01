/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:25:29 by gualvare          #+#    #+#             */
/*   Updated: 2024/07/01 16:49:29 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbl;

	nbl = n;
	if (nbl < 0)
	{
		nbl *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nbl / 10)
		ft_putnbr_fd(nbl / 10, fd);
	ft_putchar_fd(nbl % 10 + '0', fd);
}
