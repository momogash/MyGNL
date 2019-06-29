
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <fcntl.h>

# define BUFF_SIZE 32
# define MAX_FD 1024
# define RET(ret) ret > 0 ? 1 : 0

int		get_next_line(int const fd, char **line);

#endif
