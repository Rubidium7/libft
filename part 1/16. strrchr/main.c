/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:52:00 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/30 13:21:34 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strrchr(const char *str, int c);

int main()
{
	const char str[] = "mutsis on kova tyyppi, kaiketi";
	int c = 'k';
	char *ans;

	ans = ft_strrchr(str, c);
	printf("the ans is\n%s\n", ans);
	return (0);
}
