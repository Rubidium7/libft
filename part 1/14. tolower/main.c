/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:24:41 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/27 14:39:03 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int n);

int main()
{
	char	c;
	int		i;

	i = 33;
	while (i < 127)
	{
		c = i;  	
		printf("tolower says %c\n", tolower(c));
		printf("ft_tolower says %c\n", ft_tolower(c));
		i++;
	}
	return (0);
}
