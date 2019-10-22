/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:45:27 by talexia           #+#    #+#             */
/*   Updated: 2019/10/22 16:35:38 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <stdio.h>

int	main(int params, char **files)
{
	int		i;
	int		fd;
	char	*line;
	int		get;

	if (params > 1)
	{
		i = 0;
		while (++i < params)
		{
			fd = open(files[i], O_RDONLY);
			get = get_next_line(fd, &line);
			printf("%s\n", line);
			get = get_next_line(fd, &line);
			printf("%s\n", line);
			get = get_next_line(fd, &line);
			printf("%s\n", line);
		}
	}
	return (0);
}
