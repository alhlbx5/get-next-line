/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:31:16 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/10 15:33:02 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
char	*f(int fd)
{
	int	i;
	char	buffer[1000];
	
	
	i = 0;
	while (buffer[i] != '\n')
	{
		read(fd, buffer, 1);
		write(1, buffer[i], 1);
		i++;
	}
	return ("ss");
}
int	main()
{
	int	fd;
	fd = open("c.text", O_RDONLY);
	
	char *line;
	while(1)
	{
		f(fd);
		f(fd);
	}
	
		

		//free(line);
	
	// line = f(fd);
	// while()
	// f(fd);
	// printf("\n");
	// f(fd);
	// printf("\n");
	// f(fd);
	// printf("\n");
	return(0);
	// int	fd;
	// fd = open("c.text", O_RDONLY);
	
	// char *line;
	// while(1)
	// {
	// 	line = f(fd);
	// 	if(line == NULL)
	// 		break;
	// 	printf("%s\n", line);
	// 	//free(line);
	// }
}
