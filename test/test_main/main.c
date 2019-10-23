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

int	main(int params, char **files)
{
	int		fd;
	char	*line;

	fd = open("test_files/alpaca", O_RDONLY);
	while (get_next_line(fd, &line))
		printf("%s\n", line);
	fd = open("test_files/foreword", O_RDONLY);
	while (get_next_line(fd, &line))
		printf("%s\n", line);
	return (0);
}
