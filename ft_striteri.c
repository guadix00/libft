/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 14:09:00 by gualvare          #+#    #+#             */
/*   Updated: 2024/07/04 19:37:36 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void to_lower_upper(unsigned int i, char *c)
{
	if ( i % 2 == 0)
		*c = (ft_toupper(*c));
	else
	*c = (ft_tolower(*c));
}

int main(void)
{
	char original[] = "hola";
	ft_striteri(original, to_lower_upper);
	printf("%s\n", original);
}*/
