#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

// # GNL USES STATIC VARIABLES, OF COURSE YOU CAN ONLY USE ONE TEST

int	main(void)
{
	int		fd;
	int		count;
	char	*next_line;

	count = 0;
	printf("\n # ------- BASIC TEST -------\n\n");
	while (count != 5)
	{
		fd = open("allexamples/example.txt", O_RDONLY);
		next_line = get_next_line(fd);
		count++;
		printf("[%d]  %s\n", count, next_line);
		next_line = NULL;
	}
	printf("\n");
	/*
	printf("\n\n # ------- GET_NEXT_LINE -------\n\n");
	count = 0;
	while (count != 5)
	{
		fd = open("allexamples/example_sustainability.txt", O_RDONLY);
		next_line = get_next_line(fd);
		count++;
		printf("[%d]  %s\n", count, next_line);
		next_line = NULL;
	}
	printf("\n");
	*/
	/*
	printf("\n\n # ------- ONE NL TEST -------\n\n");
	count = 0;
	while (count != 5)
	{
		fd = open("allexamples/example_oneNL.txt", O_RDONLY);
		next_line = get_next_line(fd);
		count++;
		printf("[%d]  %s\n", count, next_line);
		next_line = NULL;
	}
	printf("\n");
	*/
	/*
	printf("\n\n # ------- MULTIPLE NL TEST -------\n\n');
	count = 0;
	while (count != 5)
	{
		fd = open("allexamples/example_multipleNL.txt", O_RDONLY);
		next_line = get_next_line(fd);
		count++;
		printf("[%d]  %s\n", count, next_line);
		next_line = NULL;
	}
	printf("\n");
	*/
	free(next_line);
	close(fd);
	return (0);
}
