/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:13:44 by aheng             #+#    #+#             */
/*   Updated: 2023/06/25 21:51:29 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = ft_strlen(s1);
	result = 0;
	if (set == 0)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - i + 1]))
			j--;
		result = malloc (sizeof(char) * (j - i + 1));
		if (result)
			ft_strlcpy(result, &s1[i], j - i +1);
	}
	return (result);
}
