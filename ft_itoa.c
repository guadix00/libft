/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:55:38 by gualvare          #+#    #+#             */
/*   Updated: 2024/07/04 19:30:03 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	num_counter(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	size_t	len;
	long	nb;

	nb = n;
	len = num_counter(nb);
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	dest[len--] = '\0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		dest[0] = '0';
	while (nb)
	{
		dest[len] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (dest);
}
