/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:37:15 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/03 13:53:05 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_memcmp(const void *str1, const void *str2, size_t n);

int main()
{
	const char	str1[] = "\xff\xaa\xde\xffMACOSX\xff";
	const char	str2[] = "\xff\xaa\xde\x02";
	int			ans;
	int			h;

	h = 8;
	ans = memcmp(str1, str2, h);
	printf("the dif is %d\n", ans);
	ans = ft_memcmp(str1, str2, h);
	printf("the dif is %d\n", ans);
	return (0);
}
