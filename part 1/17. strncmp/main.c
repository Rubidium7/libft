/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:37:15 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/30 13:48:28 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *str1, const char *str2, int n);

int main()
{
	const char	str1[] = "this is a string";
	const char	str2[] = "this is a striyyng";
	int			ans;

	ans = ft_strncmp(str1, str2, 10);
	printf("the dif is %d\n", ans);
	return (0);
}
