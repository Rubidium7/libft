/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:18:26 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/26 18:48:27 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
void ft_bzero(char *str, int n);

int main()
{
	char test[] = "mutsis on hieno numero";
	char test2[] = "mutsis on hieno numero";
	printf("the og string is %s\n", test);
	bzero(test, 10);
	printf("%c\n", test[9]);
	printf("bzero made it to:\n%s\n", test);
	ft_bzero(test2, 10);
	printf("%c\n", test[9]);
	printf("ft_bzero made it to:\n%s\n", test2);
	return (0);
}
