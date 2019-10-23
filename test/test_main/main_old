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
	int		i;
	int		fd;
	char	*line;
//	int		get;
//	int		a;

	if (params > 1)
	{
		i = 0;
		while (++i < params)
		{
//			a = 0;
			fd = open(files[i], O_RDONLY);
/*			while (++a<=11)
			{
				get = get_next_line(fd, &line);
				printf("%s\n", line);
			}
			*/
			while (get_next_line(fd, &line))
				printf("%s\n\n", line);
		}
	}
	return (0);
}
