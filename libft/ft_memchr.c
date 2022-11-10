/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:57:17 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/07 15:28:31 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_memchr(const char *str, int c, int n)
{
	int	i;

	i = 0;
	while (i < n && str[i] != c)
		i++;
	if (i == n)
		return (NULL);
	str = str + i;
	return ((char *)str);
}
