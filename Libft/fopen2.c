/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fopen2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 17:19:22 by momogash          #+#    #+#             */
/*   Updated: 2019/07/03 18:01:06 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"

int main(void)
{
	int fd;

	fd = open("42", O_WRONLY |O_CREAT, S_IRUSR | S_IWUSR);
		if	(fd == -1)
		{
			ft_putstr("Failed to open file!\n");
			return (1);
		}
	ft_putnbr(fd);
	if	(close(fd) == -1)
	{
		ft_putstr("failed to close file!\n");
		return (1);
	}
	return (0);
}
