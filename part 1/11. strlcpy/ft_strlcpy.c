/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:30:30 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/31 16:47:00 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

size_t ft_strlcpy(char *dst, const char *src, size_t s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;	
	while (src[len] != '\0')
		len++;
	while (i + 1 < s)

	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
