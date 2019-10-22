/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:45:27 by talexia           #+#    #+#             */
/*   Updated: 2019/10/22 11:46:45 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include <stdio.h>

int	main(int params, char **files)
{
	int		i;
	int		fd;
	char	*text;
	char	**line;

	if (params > 1)
	{
		i = 0;
		text = "111";
		line = &text;
		while (++i < params)
		{
			fd = open(files[i], O_RDONLY);
			printf("%d\n", get_next_line(fd, line));
			printf("%s\n", *line);
		}
	}
	return (0);
}
