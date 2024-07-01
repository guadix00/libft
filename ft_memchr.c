/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:57:51 by gualvare          #+#    #+#             */
/*   Updated: 2024/06/26 16:06:24 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	find;

	find = (unsigned char)c;
	str = (unsigned char *)s;
	while (n)
	{
		if (*str == find)
			return (str);
		else
			str++;
		n--;
	}
	return (NULL);
}
