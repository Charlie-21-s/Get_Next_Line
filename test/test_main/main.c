/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:45:27 by talexia           #+#    #+#             */
/*   Updated: 2019/10/23 15:17:59 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd1;
	int		fd2;
	char	*line;

	fd1 = open("test_files/alpaca", O_RDONLY);
	fd2 = open("test_files/foreword", O_RDONLY);
	printf("%d", get_next_line(fd1, &line));
	printf("%s\n", line);
	printf("%d", get_next_line(fd2, &line));
	printf("%s\n", line);
	while (get_next_line(fd1, &line))
		printf("%s\n", line);
	while (get_next_line(fd2, &line))
		printf("%s\n", line);
	return (0);
}
