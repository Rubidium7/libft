/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:14:40 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/24 18:32:20 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ans = (char*) malloc (len * sizeof(char));
	int size;
	size = 0;
	while (s[start] != '\0' && size != len)
	{
		ans[size] = s[start];
		size++;
		start++;
	}
	ans[size] = '\0';
	return(ans);
}
