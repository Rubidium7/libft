/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isfuntions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:15:50 by corellan          #+#    #+#             */
/*   Updated: 2022/10/26 18:03:12 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c); //your ft functions
int	their = 1;
int	our = 1;


int	main(void)
{
	for (int i = 0x00; i < 0x80; i++)
	{
	their = isprint(i); //their functions
	our = ft_isprint(i); //your ft functions
	if(their != our)
		printf("WRONG [%d]\n", i);
	else
		printf("[%d]\n", i);
	printf("%d\n",their);
	printf("%d\n\n",our);
	}
	return (0);
}
