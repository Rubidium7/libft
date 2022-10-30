/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:33:58 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/25 17:36:25 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strtrim(char const *s1, char const *set);

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
	char s[] = "aeaeeehi helloaaaaaaaa";
	ft_putstr(s);
	ft_putchar('\n');
	char set[] = "aea";
	ft_putstr(set);
	char *ans = ft_strtrim(s, set);
	ft_putchar('\n');
	ft_putstr(ans);
	ft_putchar('\n');
	return(0);
}
