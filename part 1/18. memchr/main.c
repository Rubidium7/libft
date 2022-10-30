/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:52:00 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/30 13:56:59 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_memchr(const char *str, int c, int n);

int main()
{
	const char str[] = "mutsis on kova tyyppi, kaiketi";
	int c = 'k';
	int n = 15;
	char *ans;

	ans = ft_memchr(str, c, n);
	printf("the ans is\n%s\n", ans);
	return (0);
}
