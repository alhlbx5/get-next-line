/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:14:59 by aalhalab          #+#    #+#             */
/*   Updated: 2024/02/11 21:25:43 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int	main()
{
	int	fd;
	fd = open("tests.txt", O_RDONLY);
	char *line;
	
	
	printf("%s", line = get_next_line(fd));
	printf("%s", line = get_next_line(fd));
	printf("%s", line = get_next_line(fd));
	printf("%s", line = get_next_line(fd));
	printf("%s", line = get_next_line(fd));
	printf("%s", line = get_next_line(fd));
	printf("%s", line = get_next_line(fd));
	printf("%s", line = get_next_line(fd));
	printf("%s", line = get_next_line(fd));
}