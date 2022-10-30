/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:07:27 by nlonka            #+#    #+#             */
/*   Updated: 2022/10/26 16:15:04 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int n)
{
	if (n >= 65 && n <= 90)
		return (1);
	if (n >= 97 && n <= 122)
		return (1);
	else 
		return (0);
}
