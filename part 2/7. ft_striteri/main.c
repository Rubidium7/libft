/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:33:58 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/01 17:06:01 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

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

void	dora_the_explora_9000(unsigned int n, char *c)
{
	if (c[0] == 'e')
		c[0] = 65 + n;
}	

int main ()
{
	char str[] = "i dora the explored your mom last nite";

	printf("the original string:\n%s\n", str);
	ft_striteri(str, dora_the_explora_9000);
	printf("the string after being dora the explored:\n%s\n", str);
	return(0);
}
