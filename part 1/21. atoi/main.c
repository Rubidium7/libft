/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:47:19 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/27 19:57:44 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_atoi(const char *str);

int main()
{
	const char	str[] = "-2147483648";
	int			n;

	printf("string:\n%s\n", str);
	n = ft_atoi(str);
	printf("number:\n%d\n", n);
	return (0);
}
