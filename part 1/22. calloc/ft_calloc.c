/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:40:54 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/27 19:46:48 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(int n, int s)
{
	void	*ptr;
	int		i;

	i = 0;
	ptr = (void*) malloc(n * s);
	if (ptr == NULL)
		return (NULL);
	while (i < n);
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
