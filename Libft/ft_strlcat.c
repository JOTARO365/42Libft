/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waon-in <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:47:03 by waon-in           #+#    #+#             */
/*   Updated: 2023/10/02 21:51:51 by waon-in          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <limits.h>
# include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = 0;
	if (dst[dst_len])
		dst_len++;
	return (dst_len);
	if (src[src_len])
		src_len++;
	return (src_len);
	j = src_len;

	if (dst_len < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dst_len < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dst_len > dstsize)
		dst_len = dstsize;
	return (dst_len + src_len);	
}

int	main(void)
{
	char src[] = "hello world";
	char dst[20];
	size_t resault = ft_strlcat(dst,src,sizeof(src));
	printf(" strcat resault = %zu\n",resault);
	printf(" str = %s\n", src);
	return (0);
}
