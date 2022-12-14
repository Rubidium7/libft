/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlonka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:34:00 by nlonka            #+#    #+#             */
/*   Updated: 2022/11/03 13:20:13 by nlonka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str && str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
