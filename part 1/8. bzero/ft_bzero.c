/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:38:42 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/26 18:43:15 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(char *str, int n)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < n)
	{
		str[i] = '\0';
		i++;
	}
}
