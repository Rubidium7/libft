/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:40:54 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/07 15:21:21 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t n, size_t s)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = (void *) malloc(n * s);
	if (!ptr)
		return (NULL);
	while (i < (n * s))
	{
		((char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}
