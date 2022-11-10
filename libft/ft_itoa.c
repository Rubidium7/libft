/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:20:25 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/07 15:27:54 by nlonka           ###   ########.fr       */
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

char	*the_big_malloc_300(int n, int *h)
{
	char	*ans;

	*h = 1;
	if (n < 0)
		*h = *h + 1;
	while (n / 10)
	{
		n = n / 10;
		*h = *h + 1;
	}
	ans = (char *) malloc ((*h + 1) * sizeof(char));
	return (ans);
}

int	potenssinaattori (int h, int c)
{
	int ans;
	ans = 1;
	while (h > 1)
	{
		ans = ans * 10;
		h--;
	}
	if (c < 0)
		ans = ans/10;
	return (ans);
}

void	negikset(char *ans, int i, int h, int n)
{
	if (n == -2147483648)
 		ans = ft_putout(ans);
	else
	{
		ans[i] = '-';
		i++;
		n = -n;
		while (potenssinaattori(h, -1) > 0)
		{
			ans[i] = n / (potenssinaattori(h, -1)) % 10 + '0';
			h--;
			i++;
		}
		ans[i] = '\0';
	}
}

char	*ft_itoa(int n)
{
	char	*ans;
	int		i;
	int		h;

	i = 0;
	ans = the_big_malloc_300(n, &h);
	if (ans == NULL)
		return (NULL);
	if (n < 0)
        negikset(ans, i, h, n);
	else
	{
		while (h > 0)
		{
			ans[i] = n / (potenssinaattori(h, 1)) % 10 + '0';
			h--;
			i++;
		}
		ans[i] = '\0';
	}
	return (ans);
}
