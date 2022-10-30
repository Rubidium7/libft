/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:21:29 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/24 15:31:36 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	char	huh;
	int	jaa;

	huh = 'g';
	jaa = isalpha(huh);
	return(jaa);
}
