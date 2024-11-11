/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:31:41 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/11 03:43:22 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

static int	count_words(const char *s, char c)
{
	int	i;
	int	words;
	int	in_word;

	i = 0;
	words = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			words++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (words);
}

static void	split(char const *s, char c, char **strarray)
{
	int	i;
	int	j;
	int	start;
	int	words;

	i = 0;
	j = 0;
	start = 0;
	words = count_words(s, c);
	while (j < words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		strarray[j] = ft_substr(s, start, i - start);
		if (strarray[j] == NULL)
		{
			free_all(strarray);
			return ;
		}
		j++;
	}
	strarray[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**strarray;

	if (s == NULL)
		return (NULL);
	strarray = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (strarray == NULL)
		return (NULL);
	split(s, c, strarray);
	return (strarray);
}
