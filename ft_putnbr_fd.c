/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:20:23 by aheng             #+#    #+#             */
/*   Updated: 2023/07/05 19:05:34 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	prt_char(int n, char *temp, int fd)
{
	int	i;

	i = 0;
	while (n)
	{
		temp[i] = n % 10 + '0';
		i++;
		n = n / 10;
	} 
	while (i--)
		write(fd, &temp[i], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	temp[12];
	
	i = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	prt_char(n, temp, fd);
}

// int main()
// {
// 	ft_putnbr_fd(-250, 1);
// }