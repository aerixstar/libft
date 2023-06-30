/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:20:29 by aheng             #+#    #+#             */
/*   Updated: 2023/06/30 17:43:57 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_wrd(char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

int	wrd_len(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	*add_wrd(char *s, char c)
{
	int		len;
	char	*wrd;
	int		i;

	len = wrd_len(s, c);
	wrd = malloc(sizeof(char) * (len + 1));
	if (!wrd)
		return (NULL);
	i = 0;
	while (i < len)
	{
		wrd[i] = s[i];
		i++;
	}
	wrd[i] = '\0';
	return (wrd);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;

	i = 0;
	j = 0;
	strs = malloc(sizeof(char *) * (count_wrd((char *)s, c) + 1));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			strs[j++] = add_wrd((char *)s + i, c);
		while (s[i] != c && s[i])
			i++;
	}
	strs[j] = 0;
	return (strs);
}

// #include <stdio.h>
// int main()
// {
// 	char **s;
// 	int i;
// 	i = 0;
// 	s = ft_split("hello there how", ' ');
// 	while (s[i])
// 		printf(i ? ", %s" : "%s", s[i++]);
// }