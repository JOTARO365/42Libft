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

static int	ft_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c && in_word)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_get_next_word(const char *s, char c, size_t *len)
{
	const char	*start;
	const char	*end;

	while (*s && *s == c)
		s++;
	start = s;
	while (*s && *s != c)
		s++;
	end = s;
	*len = end - start;
	return ((char *)start);
}

static void	ft_free_mem(char **arr, int words)
{
	int	i;

	i = 0;
	while (i < words && arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char			**res;
	size_t			words;
	size_t			len;
	size_t			i;

	len = 0;
	if (!s)
		return (NULL);
	words = ft_count(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < words)
	{
		s = ft_get_next_word(s, c, &len);
		res[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!res[i])
		{
			ft_free_mem(res, i);
			return (NULL);
		}
		ft_strncpy(res[i], s, len);
		res[i][len] = '\0';
		s += len;
		i++;
	}
	res[words] = NULL;
	return (res);
}

