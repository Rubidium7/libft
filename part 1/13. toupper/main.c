/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:24:41 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/27 14:37:34 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int n);

int main()
{
	char	c;
	int		i;

	i = 33;
	while (i < 127)
	{
		c = i;  	
		printf("toupper says %c\n", toupper(c));
		printf("ft_toupper says %c\n", ft_toupper(c));
		i++;
	}
	return (0);
}
