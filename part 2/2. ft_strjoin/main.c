/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:33:58 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/25 14:08:06 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strjoin(char const *s1, char const *s2);

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
	char s[10] = "hi hello ";
	char y[10] = "you there";
	ft_putstr(s);
	ft_putchar('\n');
	ft_putstr(y);
	char *ans = ft_strjoin(s, y);
	ft_putchar('\n');
	ft_putstr(ans);
	ft_putchar('\n');
	return(0);
}
