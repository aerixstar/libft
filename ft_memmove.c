/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:19:50 by aheng             #+#    #+#             */
/*   Updated: 2023/07/07 14:43:24 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*char_dst;
	char		*char_src;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	char_dst = (char *)dst;
	char_src = (char *)src;
	i = 0;
	if (char_dst > char_src)
		while (len--)
			char_dst[len] = char_src[len];
	else
	{
		while (i < len)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	}
	return (dst);
}

// int main()
// {
// 	char src[100] = "hello";
// 	ft_memmove(src + 1, src, 3);
// 	printf("%s", src);
// }