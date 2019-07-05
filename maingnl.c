/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maingnl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 07:26:41 by momogash          #+#    #+#             */
/*   Updated: 2019/07/04 11:48:35 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main(int ac, char *av[])
{
	int fd;
	char *line;

	int ac = 0;

	fd = open(av[1],O_RDONLY);
	while	(get_next_line(fd, &line) == 1)
	{
		printf("%s\n", line);
		if (line)
			ft_strdel(&line);
	}
	if	(line)
		free(line);
	close(fd);
	return (0);
}
