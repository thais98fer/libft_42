/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:48:00 by thfernan          #+#    #+#             */
/*   Updated: 2025/09/12 16:12:31 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h> // open

void	test_bonus(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Insira pelo menos um fd: ./a.out <file1> <file2> ...\n");
		return;
	}
	int num_files = argc - 1;
	int *fds = malloc(sizeof(int) * num_files);
	char **lines = malloc(sizeof(char *) * num_files);
	if (!fds || !lines)
	{
		perror("malloc");
		return;
	}
	// Abrindo arquivos usando ponteiro
	char **file = argv + 1; // ponteiro para o primeiro arquivo
	int i = 0;
	while (file < argv + argc)
	{
		fds[i] = open(*file, O_RDONLY);
		if (fds[i] < 0)
		{
			perror(*file);
			lines[i] = NULL;
		}
		else
			lines[i] = NULL;

		file++;
		i++;
	}
	int active = num_files;
	printf("=== Testing multiple FDs ===\n");
	while (active > 0)
	{
		i = 0;
		file = argv + 1; // reset ponteiro para percorrer novamente
		while (file < argv + argc)
		{
			if (fds[i] >= 0)
			{
				free(lines[i]);
				lines[i] = get_next_line(fds[i]);
				if (lines[i])
					printf("FD%d: %s", i + 1, lines[i]);
				else
					active--;
			}
			file++;
			i++;
		}
	}
	// Fecha fds e libera memória
	i = 0;
	file = argv + 1;
	while (file < argv + argc)
	{
		if (fds[i] >= 0)
			close(fds[i]);
		free(lines[i]);
		i++;
		file++;
	}
	free(fds);
	free(lines);
	printf("=== End of multiple FDs ===\n");
}

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

void test_stdin(void)
{
	char *line;

	printf("=== Reading from stdin (digite algo e pressione Enter) ===\n");
	printf("=== (pressione CRTL + D para encerrar) ===\n\n");
	while ((line = get_next_line(0)) != NULL)  // 0 = stdin
	{
		printf("You typed: %s", line);
		free(line);
	}
	printf("=== End of stdin ===\n\n");
}

int	main(int argc, char **argv)
{
	test("txt/empty.txt");
	test("txt/one_line.txt");
	test("txt/test1.txt");
	test("txt/test2.txt");
	test("txt/test.txt");
	test("txt/big.txt");

	// Teste stdin
	test_stdin();

	// Teste múltiplos FDs
	if (argc > 1)
		test_bonus(argc, argv);
	else
	{
		printf("=== Para múltiplos FDs, passe arquivos como argumentos ===\n");
		printf("=== Exexmplo: ./a.out <file1> <file2> ...\n");
	}
	return (0);
}
