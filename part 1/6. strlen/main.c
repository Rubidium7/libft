/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:10:54 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/26 18:16:44 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen (char *str);

int	main()
{
	char test[] = "1234567890";
	int n = 10;
	int	ans;
	printf("string is: %s and it's length is %d\n", test, n);
	ans = ft_strlen(test);
	printf("my little wittle function says that it's %d char(s) long\n", ans);
	return (0);
}
