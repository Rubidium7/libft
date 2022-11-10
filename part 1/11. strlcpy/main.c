/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:21:30 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/01 14:44:45 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t s);

int	main()
{
	char s1[] = "01234";
	char s2[] = "ABC";
	size_t n = 2;
	size_t ans;

	printf("s1 = %s\ns2 = %s\n", s1, s2);
	ans = ft_strlcpy(s2, s1, n);
	printf("%zu\n", ans);
	printf("s1 now = %s\n", s1);
	printf("s2 now = %s\n", s2);
	return (0);
}
