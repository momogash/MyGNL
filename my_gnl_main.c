/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_gnl_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:17:16 by momogash          #+#    #+#             */
/*   Updated: 2019/08/14 17:17:43 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>

int main(int ac, char *av[])
{
	int fd;

	ac = 1;

	fd = open(av[1],O_RDONLY);
	if (fd < 0)
		printf("error reading file\n");
	printf("fd = %d\n", fd);

	return(0);
}
