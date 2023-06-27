/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:42:08 by aheng             #+#    #+#             */
/*   Updated: 2023/06/25 21:48:42 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	if (!count || !size)
		return (NULL);
	else
	{
		ptr = malloc(count * size);
		if (ptr != NULL)
			ft_bzero(ptr, (count * size));
		return (ptr);
	}
}
