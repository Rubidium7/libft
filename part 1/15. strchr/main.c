/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:52:00 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/30 12:58:23 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strchr(const char *str, int c);

int main()
{
	const char str[] = "mutsis on kova tyyppi";
	int c = 'k';
	char *ans;

	ans = ft_strchr(str, c);
	printf("the ans is\n%s\n", ans);
	return (0);
}
