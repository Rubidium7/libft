/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:33:58 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/01 16:47:30 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

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

char	dora_the_explora(unsigned int n, char c)
{
	c = 65 + n;
	return (c);
}	

int main ()
{
	char const str[] = "i dora the explored your mom last nite";
	char *ans;

	printf("the original string:\n%s\n", str);
	ans = ft_strmapi(str, dora_the_explora);
	printf("the string after being dora the explored:\n%s\n", ans);
	return(0);
}
