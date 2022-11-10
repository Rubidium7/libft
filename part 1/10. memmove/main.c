/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:18:26 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/01 18:31:55 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
char *ft_memmove(char *dest, char *src, int n);

int main()
{
	char dest[] = "mutsis on hieno numero";
	char src[] = "eiku isäs";
	char dest2[] = "mutsis on hieno numero";
	char src2[] = "eiku isäs";
	printf("the src string is %s\n", src);
	printf("the dest string is %s\n", dest);
	memmove(src + 3, src, 7);
	printf("%s\n", src);
	ft_memmove(src2 + 3, src2, 7);
	printf("%s\n", src2);
	return (0);
}
