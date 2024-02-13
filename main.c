/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:14:59 by aalhalab          #+#    #+#             */
/*   Updated: 2024/02/13 20:21:59 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int	main()
{
	int	fd;
	fd = open("tests", O_RDONLY);
	char *line;
	printf("buffer = %d\n", BUFFER_SIZE);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		printf("----------\n");
		printf("%s", line);
	}
	
}
//char b[c];