/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:19:45 by aheng             #+#    #+#             */
/*   Updated: 2023/06/30 19:05:13 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*char_dst;
	char	*char_src;
	int		i;

	if (!dst && !src)
		return (NULL);
	char_dst = (char *)dst;
	char_src = (char *)src;
	i = 0;
	while (i < n && char_src[i])
	{
		char_dst[i] = char_src[i];
		i++;
	}
	char_dst[i] = '\0';
	return (dst);
}

// int main()
// {
// 	char src[100] = "hello";
// 	ft_memcpy(src + 1, src, 3);
// 	printf("%s", src);
// }