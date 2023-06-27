/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:13:47 by aheng             #+#    #+#             */
/*   Updated: 2023/06/25 21:51:23 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*substr2(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sstr;

	sstr = malloc(sizeof(char) * (len + 1));
	if (!sstr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			sstr[j] = s[i];
			++j;
		}
		++i;
	}
	sstr[j] = '\0';
	return (sstr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	lenstack;

	lenstack = ft_strlen(s + start);
	if (!s)
		return (NULL);
	if (len > lenstack)
		len = lenstack;
	return (substr2(s, start, len));
}
