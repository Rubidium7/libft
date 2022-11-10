/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:33:58 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/01 13:54:00 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int loca;
	loca = 0;

	while (str[loca] != '\0')
	{
		ft_putchar(str[loca]);
		loca++;
	}
}

int main ()
{
	int	fd = 2;
	int	n = -2147483648;
	ft_putnbr_fd(n, fd);
	ft_putchar('\n');
	return(0);
}
