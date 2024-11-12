/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 01:17:33 by gcerquei          #+#    #+#             */
/*   Updated: 2024/11/12 01:23:36 by gcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **strarray, int j)
{
	while (j > 0)
		free(strarray[--j]);
	free(strarray);
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

static int	split(char const *s, char c, char **strarray)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		strarray[j] = ft_substr(s, start, i - start);
		if (strarray[j] == NULL)
		{
			free_all(strarray, j);
			return (0);
		}
		j++;
	}
	strarray[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strarray;
	int		words;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	strarray = malloc((words + 1) * sizeof(char *));
	if (strarray == NULL)
		return (NULL);
	if (split(s, c, strarray) == 0)
		return (NULL);
	return (strarray);
}
