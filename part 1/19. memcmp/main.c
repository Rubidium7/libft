/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:37:15 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/30 14:12:41 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const char *str1, const char *str2, int n);

int main()
{
	const char	str1[] = "this is a string";
	const char	str2[] = "this is a striyyng";
	int			ans;

	ans = memcmp(str1, str2, 10);
	printf("the dif is %d\n", ans);
	return (0);
}
