/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waon-in <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:35:44 by waon-in           #+#    #+#             */
/*   Updated: 2023/10/02 15:46:07 by waon-in          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t		i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		if (i < dstsize)
			dst[i] = '\0';
	}
	return (i);
}
