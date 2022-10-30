/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:53:34 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/27 19:08:39 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strdup(const char *str);

int main()
{
	char src[] = "link is baby :]";
	char *dest;

	printf("og string:\n%s\n", src);
	dest = ft_strdup(src);
	printf("hopefully the same string:\n%s\n", dest);
	return (0);
}
