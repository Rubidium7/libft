/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:09:06 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/07 17:27:40 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int string_amount(char const *s, char c)
{
    int i;
    int ans;
    
    i = 0;
    ans = 0;
    while (s[i] == c && s[i] != '\0')
        i++;
    while (s[i] != '\0')
    {
        while (s[i] == c)
        {
            if (s[i + 1] != c)
                ans++;
            i++;
        }
        if (s[i] != '\0')
          i++;
    }
    if (ans == 0)
        return(1);
    return (ans);
}

char **ansllocator(char **ans, char const *s, char c, int h)
{
    int i;
    int i2;
    int i3;
    int l;
    int h2;
    
    i = 0;
    i2 = 0;
    i3 = 0;
    h2 = 0;
    while (i2 < h)
    {
        while (s[i3] == c && s[i3] != '\0')
            i3++;
        while (s[i3] != c && s[i3] != '\0')
        {
            i3++;
            i++;
        }
        l = i - h2;
        h2 = h2 + l;
        ans[i2] = (char*) malloc (sizeof(char) * (l + 1));
        i2++;
    }
    return (ans);
}
char **string_separator_7000(char **ans, char const *s, char c, int h)
{
    int i;
    int i2;
    int i3;
    
    i = 0;
    i2 = 0;
    i3 = 0;
    while (i2 < h)
    {
        while (s[i3] == c && s[i3] != '\0')
            i3++;
        while (s[i3] != c && s[i3] != '\0')
            ans[i2][i++] = s[i3++];
        ans[i2][i] = '\0';
        i2++;
        i = 0;
    }
    return (ans);
}

char **ft_split(char const *s, char c)
{
    int h;
    char **ans;
    
    if (s == NULL)
        return (NULL);
    h = string_amount(s, c);
    ans = (char**) malloc(sizeof(char*) * (h + 1));
    if (ans == NULL)
        return (NULL);
	ans[h] = 0;
    ans = ansllocator(ans, s, c, h);
    if (ans == NULL)
        return (NULL);
    ans = string_separator_7000(ans, s, c, h);
    return (ans);
}

