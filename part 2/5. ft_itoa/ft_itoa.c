/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:20:25 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/04 18:12:53 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *the_big_malloc_300(int n, int *h)
{
    char *ans;
    
    *h = 1;
    if (n < 0)
        *h = *h + 1;
    while (n/10)
    {
        n = n/10;
        *h = *h + 1;
    }
    ans = (char*) malloc ((*h + 1) * sizeof(char));
    return (ans);
}

int potenssinaattori (int h)
{
    int ans;
    ans = 1;
    while (h > 1)
    {
        ans = ans * 10;
        h--;
    }
    return (ans);
}

char *ft_itoa(int n)
{
    char *ans;
    int i;
    int h;
    
    i = 0;
    ans = the_big_malloc_300(n, &h);
    if (ans == NULL)
        return (NULL);
    if (n < 0)
    {
        ans[i] = '-';
        i++;
        n = -n;
    }
    while (h > 0)
    {
        ans[i] = n / (potenssinaattori(h)) % 10 + '0';
        h--;
        i++;
    }
    ans[i] = '\0';
    return (ans);
}
