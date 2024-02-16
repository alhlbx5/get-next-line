/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:09:31 by aalhalab          #+#    #+#             */
/*   Updated: 2024/02/16 20:03:12 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

	#ifndef BUFFER_SIZE
	# define BUFFER_SIZE 100000
	#endif

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
int	ft_strlen(const char *c);
void	ft_bzero(char *c, int n);

#endif
