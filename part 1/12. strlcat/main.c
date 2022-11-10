/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:21:30 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/08 15:11:24 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlcat(char *dst, const char *src, size_t s);

int	main()
{
	char s1[] = "lorem ipsum dolor sit amet";
	char s2[] = "";
	size_t n = 15;
	size_t ans;
	char buf[n];

	strcpy(buf, s2);
	buf[14] = 'a';
	printf("s1 = %s\ns2 = %s\n", s1, s2);
	ans = ft_strlcat(buf, s1, n);
	printf("%zu\n", ans);
	printf("s1 now = %s\n", s1);
	printf("buf = %s\n", buf);
	return (0);
}
