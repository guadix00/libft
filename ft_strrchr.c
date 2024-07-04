/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:16:42 by gualvare          #+#    #+#             */
/*   Updated: 2024/07/04 17:51:50 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			ch;

	ch = c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == ch)
			return ((char *) s + i);
		i--;
	}
	if (s[0] == ch)
		return ((char *)s + i);
	return (NULL);
}
