/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualvare <gualvare@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:49:19 by gualvare          #+#    #+#             */
/*   Updated: 2024/07/06 11:56:54 by gualvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_words(const char *str, char c)
{
	int	i;
	int	count_word;

	i = 0;
	count_word = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			count_word++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count_word);
}

int	len_new_str(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

char	**check_free(char **new_str)
{
	int	i;

	i = 0;
	while (new_str[i])
	{
		free(new_str[i]);
		i++;
	}
	free(new_str);
	return (NULL);
}

char	*get_split(char const **s, char c)
{
	char	*new_split;
	int		word_len;

	word_len = len_new_str(*s, c);
	new_split = ft_substr(*s, 0, word_len);
	*s = *s + word_len;
	return (new_split);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		i;

	if (!s)
		return (NULL);
	new_str = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			new_str[i] = get_split(&s, c);
			if (new_str[i] == NULL)
				return (check_free(new_str));
			i++;
		}
	}
	new_str[i] = NULL;
	return (new_str);
}

/*int	main(void)
{
	char *s =  "hola,que,tal";
	char c = ',';
	int	i = 0;

	printf("cantidad de subcadenas = %d \n", count_words(s, c));
	char **result = ft_split(s, c);
	if (result[i] == NULL)
	{
		printf("result es nulo\n");
	}
	while (result[i] != NULL)
	{
		printf("%s \n", result[i]);
		i++;
	}
	check_free(result);
	return (0);
}*/
