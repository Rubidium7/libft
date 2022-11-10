/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leklund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:59:19 by leklund           #+#    #+#             */
/*   Updated: 2022/11/05 14:10:37 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
char *ft_itoa(int n);

int main()
{
//	int test = -2147483648;
//	printf("%s\n",ft_itoa(test));
//	printf("%ld\n",-2147483648);
	 srand(clock());
	 		int		n;
	 		char	*d;
	 		int i;
	 		i = 0;

	 		for (int i = 0; i < 2000; i++) {
	 			n = rand();
	 			d = ft_itoa(n);
	 			if (atoi(d) != n) {
	 				i++;
	 					printf("[%d]ERROR NUMBER:%d\n",i,n);

	 			}
	 		}

    return(0);
}
