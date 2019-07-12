/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 11:57:12 by momogash          #+#    #+#             */
/*   Updated: 2019/07/12 12:38:26 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char *ptr;

	ptr = (char*) malloc(100 *sizeof(char));

	if	(ptr == NULL)
		ft_putstr("allocation failed!!\n");
	else
		ft_putstr("Memory allocated.\n");
	return(0);
}

