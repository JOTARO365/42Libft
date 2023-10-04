/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waon-in <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:35:29 by waon-in           #+#    #+#             */
/*   Updated: 2023/10/04 15:26:27 by waon-in          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*from;
	unsigned char		*to;
	size_t				i;

	i = 0;
	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	if (from == to || len == 0 || to > from)
	{
		while (i < len)
		{
			to[i] = from[i];
			i++;
		}
		return (dst);
	}
	else
	{
		while (len--)
		{
			to[len] = from[i];
		}
		return (dst);
	}
}
