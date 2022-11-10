/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:37:28 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/01 18:57:13 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int		i;

	i = 0;
	if (dst > src)
	{
		dst = (dst + n);
		src = (src + n); 
		while (n > 0)
		{
			dst--;
			src--;
			*(char*)dst = *(const char*)src;
			n--;
		}
		return (dst);
	}
		while (i < n)
		{
			((char*)dst)[i] = ((const char*)src)[i];
			i++;
		}
		return (dst);
}
