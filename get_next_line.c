/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bael-gho <bael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 20:03:45 by bael-gho          #+#    #+#             */
/*   Updated: 2025/06/15 14:27:23 by bael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *read(int fd, char *left_c, char *buffer)
{
    
}

static char *clean(char *line)
{
    char *new_line;
	int i;

	i = 0;
	if (!line)
		return (NULL);
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	if (line[i] == '\0' || line[i + 1] == '\0')
		return (NULL);
	new_line = ft_substr(line, i+1, ft_strlen(line) - 1);
	if (!new_line)
	{
		free(new_line);
		return (NULL);
	}
	line[i + 1] = '\0';
	return (new_line);
}

char *get_next_line(int fd)
{
    char *result;
    char *buffer;
	static char	*stash;
    
}