/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:17:05 by aheng             #+#    #+#             */
/*   Updated: 2023/07/07 17:29:13 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	if (size == 0)
		return (ft_strlen(src) + size);
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (size < dstlen)
		return (srclen + size);
	while (src[i] && (i + dstlen) < (size - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if ((int)size > ((int)dstlen - 1))
		dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
