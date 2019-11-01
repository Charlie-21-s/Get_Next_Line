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
	int		fd3;	
	char	*line;

	fd1 = open("test_files/alpaca", O_RDONLY);
	fd2 = open("test_files/foreword", O_RDONLY);
	fd3 = open("test_files/333", O_RDONLY);
	printf("%d\n", get_next_line(fd1, &line));
	printf("%s\n", line);
//	ft_strclr(line);
//	free(line);
	printf("%d\n", get_next_line(fd2, &line));
	printf("%s\n", line);
//	ft_strclr(line);
//	free(line);
	printf("%d\n", get_next_line(fd3, &line));
	printf("%s\n", line);
	ft_strclr(line);
	free(line);
	printf("%d\n", get_next_line(fd1, &line));
	printf("%s\n", line);
//	ft_strclr(line);
//	free(line);
	printf("%d\n", get_next_line(fd2, &line));
	printf("%s\n", line);
//	ft_strclr(line);
//	free(line);
	printf("%d\n", get_next_line(fd3, &line));
	printf("%s\n", line);
//	ft_strclr(line);
//	free(line);


	/*while (get_next_line(fd1, &line))
	{
		printf("%s\n", line);
		free (line);
		line = NULL;
	}
	while (get_next_line(fd2, &line))
	{
		printf("%s\n", line);
		free (line);
		line = NULL;
	}
		while (get_next_line(fd2, &line))
	{
		printf("%s\n", line);
		free (line);
		line = NULL;
	}*/
	return (0);
}
