/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waon-in <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:35:29 by waon-in           #+#    #+#             */
/*   Updated: 2023/09/24 14:29:59 by waon-in          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		from;
	const char	to;
	size_t		i;

	from = (char *)dst;
	to = (const char *)src;
	if (from == to || len == 0)
		return (dst);

}
