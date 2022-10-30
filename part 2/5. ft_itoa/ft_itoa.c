/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:20:25 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/30 14:34:03 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_putout(char *ans)
{
	ans[0] = '-';
	ans[1] = '2';
	ans[2] = '1';
	ans[3] = '4';	
	ans[4] = '7';	
	ans[5] = '4';	
	ans[6] = '8';	
	ans[7] = '3';	
	ans[8] = '6';	
	ans[9] = '4';	
	ans[10] = '8';	
	return (ans);
}
char	*putnumbinator_9000(char *ans, int h, int n)
{
	static int	i = 0;

	if (n == -2147483648)
	{
		ans = ft_putout(ans);
		return (ans);
	}
	if (n < 0)
	{
		ans[i] = '-';
		i++;
		n = -n;
	}
	if (n / 10)
		putnumbinator_9000(ans, h, n/10);
	if (n != 0)
	{
		ans[i] = n % 10 + '0';
		i++;
	}
	if (i == h)
		ans[i] = '\0';
	return (ans);	
}
	
char	*ft_itoa(int n)
{
	int		i;
	int		h;
	char	*ans;

	h = n;
	i = 1;
	if (n < 0)
		i++;
	while (h/10)
	{
		h = h/10;
		i++;
	}
	ans = (char*) malloc ((i + 1) * sizeof(char));
	ans = putnumbinator_9000(ans, i, n);
	return(ans);
}
