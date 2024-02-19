/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:12:29 by aalhalab          #+#    #+#             */
/*   Updated: 2024/02/19 20:05:14 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_new_line(char	*c)
{
	int	i;

	i = 0;
	while (c && c[i])
	{
		if (c[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*read_line(int fd, char *buffer)
{
	int		count;
	char	*line;

	line = malloc(sizeof(char));
	line[0] = '\0';
	line = ft_strjoin(line, buffer);
	ft_bzero(buffer, BUFFER_SIZE + 1);
	while (find_new_line(line) == 0)
	{
		count = read(fd, buffer, BUFFER_SIZE);
		if (count == 0)
		{
			if (line[0] == '\0')
			{
				free(line);
				line = NULL;
			}
			break ;
		}
		buffer[count] = '\0';
		line = ft_strjoin(line, buffer);
	}
	return (line);
}

char	*get_next_line(int fd)
{
	int				vars[3];
	static char		buffer[BUFFER_SIZE + 1];
	char			*line;

	vars[0] = 0;
	vars[1] = 0;
	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, buffer, 0) < 0)
	{
		ft_bzero(buffer, BUFFER_SIZE + 1);
		return (NULL);
	}
	line = read_line(fd, buffer);
	ft_bzero(buffer, BUFFER_SIZE + 1);
	if (find_new_line(line) == 1)
	{
		while (line && line[vars[0]] != '\n')
			vars[0]++;
		vars[0]++;
		vars[2] = vars[0];
		while (line && line[vars[0]])
			buffer[vars[1]++] = line[vars[0]++];
		while (line && line[vars[2]])
			line[vars[2]++] = '\0';
	}
	return (line);
}
