/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:22:04 by gualvare          #+#    #+#             */
/*   Updated: 2024/07/04 19:07:55 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;

	size_t num = 10;

	void *ptr = ft_calloc(num, sizeof(int));
	char *array = (char *)ptr;
	i = 0;
	while (i < num)
	{
		printf("dest[%d] = %d \n", i, array[i]);
		i++;
	}
}*/
