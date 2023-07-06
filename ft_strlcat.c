/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:17:05 by aheng             #+#    #+#             */
/*   Updated: 2023/07/06 14:19:12 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_newlen(const char *str)
{
	int	i;
	
	i = 0;
	while (str && str[i])
		i++;
	return(i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_newlen(dst);
	if (size == 0 || size < dstlen)
		return(srclen + size);
	while (src[i] && i + dstlen < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (size > ft_strlen(dst) - 1)
		dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}