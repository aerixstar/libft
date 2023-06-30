/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:19:23 by aheng             #+#    #+#             */
/*   Updated: 2023/06/30 20:28:05 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return (i);
}

char *ft_itoa(int n)
{
	int		i;
	int		j;
	char	temp[13];
	char	*res;
	
	i = 0;
	j = 0;
	while (n)
	{
		temp[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	temp[i] = '\0';
	res = malloc(sizeof(char)* (ft_strlen(temp) + 1));
	while (i--)
	{
		res[j++] = temp[i];
	}
	res[j] = '\0';
	printf("%s\n", res);
}

int	main(void)
{
	ft_itoa(23);
}
