/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:31:16 by aalhalab          #+#    #+#             */
/*   Updated: 2024/01/06 23:15:47 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
char	*get_next_line(fd)
{
	int	i;
	char	buffer[2000];
	
	i = 0;
	read(fd, buffer, sizeof(buffer));
	printf("%s", buffer);
	while (buffer[i] != '\n')
	{
		printf("%c", buffer[i]);
		i++;
	}
	
	return (0);
}
int	main()
{
	int	fd;
	fd = open("c.text", O_RDONLY);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
}
