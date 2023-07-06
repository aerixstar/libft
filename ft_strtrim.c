/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:19:05 by aheng             #+#    #+#             */
/*   Updated: 2023/07/06 13:59:43 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *str, char const *set)
{	
	int		i;
	int		start;
	int		end;
	char	*r_str;
	
	if(!str || !set)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(str) - 1;
	while (ft_strchr(set, str[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup ((char *)str + (end + 1)));
	while (ft_strrchr(set, str[end]) && end >= 0)
		end--;
	r_str = malloc (sizeof(char) * ((end - start) + 2));
	if (!r_str)
		return(NULL);
	ft_strlcpy(r_str, &str[start], ((end - start) + 2));
	return(r_str);
}
