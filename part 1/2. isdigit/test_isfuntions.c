/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isfuntions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:15:50 by corellan          #+#    #+#             */
/*   Updated: 2022/10/26 17:51:46 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c); //your ft functions
int	their = 1;
int	our = 1;


int	main(void)
{
	for (int i = 0x00; i < 0x80; i++)
	{
	their = isdigit(i); //their functions
	our = ft_isdigit(i); //your ft functions
	if(their != our)
		printf("WRONG [%d]\n", i);
	else
		printf("[%d]\n", i);
	printf("%d\n",their);
	printf("%d\n\n",our);
	}
	return (0);
}
