/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:09:06 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/05 16:33:47 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int string_amount(char const *s, char c)
{
    int i;
    int ans;
    
    i = 1;
    ans = 1;
    while (s[i] != '\0')
    {
        while (s[i] == 'c')
        {
            if (s[i + 1] != 'c')
                ans++;
            i++;
        }
        i++;
    }
    return (ans);
}

char **ft_split(char const *s, char c)
{
    int h;
    char **ans;
    
    if (s == NULL || c == '\0')
        return (NULL);
    h = string_amount(s, c);
    ans = (char**) malloc(sizeof(char*) * )
}
