/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:27:00 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/07 15:37:54 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#ifndef FT_STRTRIM_C
#define FT_STRTRIM_C

typedef struct s_sz
{
	int	beg;
	int	end;
	int	len;
}	t_sz;

#endif

int	ft_strlen (char const *s);

static void	trim_beg(char const *s1, char const *set, t_sz *sz)
{	
	int	loca;
	int	loca2;
	
	sz->beg = 0;
	loca = 0;
	loca2 = 0;
	while ((s1[loca] == set[loca2] || set[loca2] != '\0') && s1[loca] != '\0')
	{
		while (s1[loca] != set[loca2] && set[loca2] != '\0')
			loca2++;
		if (s1[loca] == set[loca2])
		{
			sz->beg++;
			loca++;
			loca2 = 0;
		}
	}
}

static void	trim_end(char const *s1, char const *set, t_sz *sz)
{
	int	i;
	int	i2;

	sz->end = sz->len + 1;
	i = sz->len;
	i2 = 0;
	
	while ((s1[i] == set[i2] || set[i2] != '\0') && i != sz->beg)
	{
		while (s1[i] != set[i2] && set[i2] != '\0')
			i2++;
		if (s1[i] == set[i2])
		{
			sz->end--;
			i--;
			i2 = 0;
		}
	}
}

char *ft_strtrim(char const *s1, char const *set)
{
	t_sz	*sz;
	int		loca;

	loca = 0;
	sz = malloc(sizeof(t_sz));
	if (sz == NULL || s1 == NULL || set == NULL)
		return (NULL);
	sz->len = ft_strlen(s1);
	trim_beg(s1, set, sz);
	trim_end(s1, set, sz);
	sz->len = sz->len - sz->beg - (sz->len - sz->end);
	char *ans = (char*) malloc ((sz->len + 1) * sizeof(char));
	if (ans == NULL)
		return (NULL);
	while (sz->beg != sz->end)
	{
		ans[loca] = s1[sz->beg];
		sz->beg++;
		loca++;
	}
	ans[loca] = '\0';
	return(ans);
}


