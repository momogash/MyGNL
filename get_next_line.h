/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 08:27:23 by momogash          #+#    #+#             */
/*   Updated: 2019/08/13 08:35:07 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "Libft/libft.h"
# include <fcntl.h>

# define BUFF_SIZE 32
# define MAX_FD 1024
# define RET(ret) ret > 0 ? 1 : 0

int		get_next_line(int const fd, char **line);

#endif
