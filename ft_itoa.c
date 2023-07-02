/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:19:23 by aheng             #+#    #+#             */
/*   Updated: 2023/07/02 18:59:59 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	string_rev(char *num, int i)
{
	char	temp;
	int		j;
	int		len;

	j = 0;
	len = (i / 2);
	i--;
	while (j < len)
	{
		temp = num[j];
		num[j] = num[i];
		num[i] = temp;
		j++;
		i--;
	}
}

void	add_into_num(char *num, int *i, long n)
{
	int	temp;

	temp = n;
	if (n < 0)
		n *= -1;
	if (n == 0)
		num[(*i)++] = '0';
	while (n)
	{
		num[(*i)++] = n % 10 + '0';
		n /= 10;
	}
	if (temp < 0)
		num[(*i)++] = '-';
	num[*i] = '\0';
}

char	*ft_itoa(int n)
{
	int		i;
	char	*num;

	i = 0;
	num = malloc(sizeof(char) * (12 + 1));
	if (!num)
		return (NULL);
	add_into_num(num, &i, n);
	string_rev(num, i);
	return (num);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_itoa(-2147483648));
// }