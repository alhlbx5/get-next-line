/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:12:29 by aalhalab          #+#    #+#             */
/*   Updated: 2024/02/11 21:24:27 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int	i;
	char	buffer[35];
	static char	buffer2[35];
	ssize_t	check;
	
	i = 34;
	while (i > -1)
		buffer[i--] = 0;
	check = read(fd, buffer, 1);
		strcpy(buffer2, buffer);
	if (check)
		return (buffer2);
	return (NULL);
}
