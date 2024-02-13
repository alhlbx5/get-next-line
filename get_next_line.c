/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:12:29 by aalhalab          #+#    #+#             */
/*   Updated: 2024/02/14 00:41:51 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



int	find_new_line(char	*c)
{
	int	i;

	i = 0;
	while(c && c[i])
	{
		if (c[i] == '\n')
			return (1);
		
			i++;
	}
	return (0);
}

char	*read_line(int	fd,	char	*buffer)
{
	int	i;
	int	j;
	char *line;
	
	line = malloc(sizeof(char));
	ft_strdup(buffer);
	while(1)
	{
		if (read(fd, buffer, BUFFER_SIZE) == 0)
		{
			line = NULL;
			break;
		}
		
		line = ft_strjoin(line, buffer);
		// printf("%s\n", line);
		// exit (1);`
		i = find_new_line(line);
		if(i == 1)
			break;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static	char	buffer[BUFFER_SIZE + 1];
	char	*line;
	int	i;
	int	j;
	int	f;
	
	j = 0;
	line = read_line(fd, buffer);
	ft_strdup(buffer);
	while(line && line [i] != '\n')
	{
		i++;
	}
	i++;
	f = i;
	while(line && line[i])
	{
		buffer[j] = line[i];
		j++;
		i++;
	} 
	while(line && line[f])
	{
		line[f] = '\0';
		f++;	
	}
	return (line);
}

