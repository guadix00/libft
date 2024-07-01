/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:29:22 by gualvare          #+#    #+#             */
/*   Updated: 2024/07/01 16:38:47 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (a[i] == b[i] && i + 1 < n)
		i++;
	return (a[i] - b[i]);
}

/*int main()
{
	char a[20] = "1234567890";
	char b[20] = "1244567800";

	printf("%i\n", ft_memcmp(a, b, 2));
}
*/
