/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waon-in <waon-in@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:20:28 by waon-in           #+#    #+#             */
/*   Updated: 2023/10/20 01:44:49 by waon-in          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*ft_next_word(char **ps, char c)
{
	char	*start;
	char	*end;

	while (**ps && **ps == c)
		(*ps)++;
	start = *ps;
	if (end > start)
		return (ft_strdup(start));
	return (NULL);
}

static	void	ft_free_res(char **res, int idx)
{
	while (idx >= 0)
		free(res[idx--]);
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int	words;
	int	i;

	i = 0;
	if (!s)
		return(NULL);
	words = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	while (i < words)
	{
		res[i] = ft_next_word((char **)&s, c);
		if (!res[i])
		{
			ft_free_res(res, i - 1);
			return (NULL);
		}
		i++;
	}
	res[words] = NULL;
	return (res);
}
