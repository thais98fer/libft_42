/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mandatory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:58:43 by thfernan          #+#    #+#             */
/*   Updated: 2025/09/12 12:25:16 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h> // open

void	test(const char *filename)
{
	char	*bytes_read;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return ;
	}
	printf("%s\n", filename);
	bytes_read = get_next_line(fd);
	while (bytes_read != NULL)
	{
		printf("%s", bytes_read);
		free(bytes_read);
		bytes_read = get_next_line(fd);
	}
	printf("=== End of file ===\n\n");
	close(fd);
}

void	test_stdin(void)
{
	char *line;

	printf("=== Reading from stdin (digite algo e pressione Enter) ===\n");
	printf("=== Pressione CRTL + D para encerrar ===\n\n");
	while ((line = get_next_line(0)) != NULL) // 0 = stdin
	{
		printf("You typed: %s", line);
		free(line);
	}
	printf("=== End of stdin ===\n\n");
}

int	main(void)
{
	test("txt/empty.txt");
	test("txt/one_line.txt");
	test("txt/test1.txt");
	test("txt/test2.txt");
	test("txt/test.txt");
	test("txt/big.txt");
	test_stdin();
	return (0);
}
