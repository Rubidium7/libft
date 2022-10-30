/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:18:26 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/26 18:32:13 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_memset(char *str, int c, int n);

int main()
{
	char test[] = "mutsis on hieno numero";
	char test2[] = "mutsis on hieno numero";
	printf("the og string is %s\n", test);
	memset(test, '7', 6);
	printf("memset made it to:\n%s\n", test);
	ft_memset(test2, '7', 6);
	printf("ft_memset made it to:\n%s\n", test2);
	return (0);
}
