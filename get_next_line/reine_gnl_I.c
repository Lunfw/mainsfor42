#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

// # GNL USES AT LEAST ONE STATIC, OF COURSE YOU CAN ONLY RUN ONE TEST

int	main(void)
{
	int		fd;
	int		count;
	char	*next_line;

	count = 0;
	fd = open("get_next_line/example.txt", O_RDONLY);
	printf("\n # ------- BASIC TEST -------\n\n");
	while (count != 5)
	{
		next_line = get_next_line(fd);
		count++;
		printf("[%d]  %s\n", count, next_line);
		next_line = NULL;
	}
	/*
	printf("\n");
	printf("\n\n # ------- GET_NEXT_LINE -------\n\n");
	count = 0;
	fd = open("get_next_line/example_sustainability.txt", O_RDONLY);
	while (count != 5)
	{
		next_line = get_next_line(fd);
		count++;
		printf("[%d]  %s\n", count, next_line);
		next_line = NULL;
	}
	*/
	/*
	printf("\n");
	printf("\n\n # ------- ONE NL TEST -------\n\n");
	count = 0;
	fd = open("get_next_line/example_oneNL.txt", O_RDONLY);
	while (count != 5)
	{
		next_line = get_next_line(fd);
		count++;
		printf("[%d]  %s\n", count, next_line);
		next_line = NULL;
	}
	*/
	/*
	printf("\n");
	printf("\n\n # ------- MULTIPLE NL TEST -------\n\n");
	count = 0;
	fd = open("get_next_line/example_multipleNL.txt", O_RDONLY);
	while (count != 5)
	{
		next_line = get_next_line(fd);
		count++;
		printf("[%d]  %s\n", count, next_line);
		next_line = NULL;
	}
	*/
	close(fd);
	printf("\n");
	free(next_line);
	return (0);
}
