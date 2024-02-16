/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:12:29 by aalhalab          #+#    #+#             */
/*   Updated: 2024/02/16 19:59:57 by aalhalab         ###   ########.fr       */
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
	
	i = 0;
	j = 0;
	line = malloc(sizeof(char));
	line = ft_strjoin(line, buffer);
	ft_bzero(buffer, BUFFER_SIZE + 1);
	while(find_new_line(line) == 0)
	{
		if (read(fd, buffer, BUFFER_SIZE) == 0)
		{
			line = NULL;
			break;
		}
		buffer[BUFFER_SIZE] = '\0';
		line = ft_strjoin(line, buffer);
	}
	return (line);
}

char	*get_next_line(int fd)
{
	int				i;
	int				j;
	int				f;
	static	char	buffer[BUFFER_SIZE + 1];
	char			*line;
	
	i = 0;
	f = 0;
	j = 0;
	if (!fd || BUFFER_SIZE < 1)
		return (NULL);
	line = read_line(fd, buffer);
	ft_bzero(buffer, BUFFER_SIZE + 1);
	if(find_new_line(line) == 1)
	{
		while(line && line[i] != '\n')
			i++;
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
	}

	return (line);
}

