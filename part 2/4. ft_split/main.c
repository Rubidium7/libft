/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:33:58 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/05 16:31:25 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char **ft_split(char const *s, char c);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char const *str)
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
	char const s[] = "HI YOU        MY FRIEND";
	ft_putstr(s);
	ft_putchar('\n');
	char c = ' ';
	ft_putchar(c);
	ft_putchar('\n');
	char **ans = ft_split(s, c);
	ft_putstr(ans[3]);
	ft_putchar('\n');
	return(0);
}
