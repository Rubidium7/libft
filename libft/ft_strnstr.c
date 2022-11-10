/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:19:58 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/07 15:37:19 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strnstr(const char *hs, const char *n, int l)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (n[i] == '\0')
		return ((char *)hs);
	if (l == 0 || !*hs)
		return (NULL);
	while (hs[i] != '\0' && i < l)
	{
		while (hs[i] == n[i2])
		{
			i++;
			i2++;
			if (n[i2] == '\0')
				return ((char *)(hs + i - i2));
		}
		i2 = 0;
		i++;
	}
	return (NULL);
}
