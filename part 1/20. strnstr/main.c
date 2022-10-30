/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:09:47 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/30 14:28:01 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, int n);

int main()
{
	const char haystack[] = "i really like the zeld videogame zelda the breath of the wild";
	const char needle[] = "zelda";
	char *ans;
	char *ans2;

	ans = ft_strnstr(haystack, needle, 100);
	ans2 = strnstr(haystack, needle, 100);
	printf("strnstr says:\n%s\n", ans2);
	printf("ft_strnstr says:\n%s\n", ans);
	return (0);
}
