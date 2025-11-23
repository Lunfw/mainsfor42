#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	int		count;
	char	*next_line;

	count = 0;
	while (count != 5)
	{
		fd = open("example.txt", O_RDONLY);
		next_line = get_next_line(fd);
		count++;
		printf("[%d]  %s\n", count, next_line);
		next_line = NULL;
	}
	free(next_line);
	close(fd);
	return (0);
}
