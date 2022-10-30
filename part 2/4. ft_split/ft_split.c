/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:09:06 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/26 19:42:06 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#ifndef FT_SPLIT_C
#define FT_SPLIT_C

typedef struct s_h
{
	int hght;
	int i;
	int i2;
	int i3;
	int len;
	int help;

} t_h;

#endif

int	how_biggo(char const *s, char c)
{
	int i;
	int	ans;

	ans = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			ans++;
		i++;
	}
	return(ans);
}

void	structing(t_h *h, char const *s, char c)
{
	h->hght = how_biggo(s, c);
	h->i = 0;
	h->i2 = 0;
	h->i3 = 0;
	h->len = 0;
	h->help = 0;
}

char **ft_split(char const *s, char c)
{
	t_h		*h;
	char	**ans;

	h = malloc(sizeof(t_h));
	structing(h, s, c);
	ans = (char**) malloc (h->hght * sizeof(char*));
	while (h->i2 != h->hght) 
	{
		while (s[h->i] != c && s[h->i] != '\0')
			h->i++;
		h->len = h->i + 1 - h->help;
		h->help = h->help + h->len;
		ans[h->i2] = (char*) malloc (h->len * sizeof(char));
		h->i = h->help - h->len;
		while (s[h->i] != c && s[h->i] != '\0')
		{
			ans[h->i2][h->i3] = s[h->i];
			h->i++;
			h->i3++;
		}
		ans[h->i2][h->i3] = '\0';
		h->i3 = 0;	
		h->i2++;
	}
	return(ans);
}
