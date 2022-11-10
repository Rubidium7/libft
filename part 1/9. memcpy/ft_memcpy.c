/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:06:58 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/01 18:20:46 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest2;
	char	*src2;

	if (dest == NULL || src == NULL)
		return (NULL);
	dest2 = (char*)dest;
	src2 = (char*)src;
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	dest = dest2;
	return (dest);
}
