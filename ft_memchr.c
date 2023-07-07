/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:09:18 by aheng             #+#    #+#             */
/*   Updated: 2023/07/07 14:56:38 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*match;

	match = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(match + i) == (unsigned char)c)
			return (match + i);
		i++;
	}
	return (NULL);
}
