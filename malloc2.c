/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 12:34:58 by momogash          #+#    #+#             */
/*   Updated: 2019/07/12 13:07:14 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	char *ptr;
	char *p;
	char *s;

	s = "Girl Code!";
	ptr = (char*)malloc(ft_strlen(s) *sizeof(char));

	p = ptr;

	if	(ptr == NULL)
		ft_putstr("Memory allocation failed!");
	else
	{
		while	(s != '\0')
		{
			ptr = ft_strdup(s);
			ft_putstr(p);
			s++;
			ptr++;
		}
		*ptr = '\0';
		return(*p);
	}
	return(0);
}
