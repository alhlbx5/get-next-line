/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhalab <aalhalab@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:50:11 by aalhalab          #+#    #+#             */
/*   Updated: 2024/02/20 12:09:56 by aalhalab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	if (!c)
		return (0);
	while (c[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;
	size_t	i;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (!result || !s1 || !s2)
		return (NULL);
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < len2 + len1)
		result[i++] = *s2++;
	result[i] = '\0';
	if (s1)
		return (free(s1), s1 = NULL, result);
	return (result);
}

void	ft_bzero(char *c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
