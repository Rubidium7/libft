/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:14:40 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/07 15:38:50 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen_cooler(char const *s)
{
	size_t	i;

	i = 0;
	while (s && s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	size;

	ans = (char *) malloc ((len + 1) * sizeof(char));
	if (start >= ft_strlen_cooler(s))
	{
		ans[0] = '\0';
		return (ans);
	}
	if (ans == NULL)
		return (NULL);
	size = 0;
	while (s && s[start] != '\0' && size != len)
	{
		ans[size] = s[start];
		size++;
		start++;
	}
	ans[size] = '\0';
	return (ans);
}
