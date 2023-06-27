/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:42:26 by aheng             #+#    #+#             */
/*   Updated: 2023/06/25 21:51:26 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*temp;
	int		i;

	i = 0;
	temp = (malloc((ft_strlen(s1) + 1) * sizeof(char)));
	if (temp == NULL)
		return (NULL);
	else
	{
		while (s1[i] != '\0')
		{
			temp[i] = s1[i];
			++i;
		}
		temp[i] = '\0';
	}
	return (temp);
}
