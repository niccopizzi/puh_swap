/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npizzi <npizzi@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:03:39 by npizzi            #+#    #+#             */
/*   Updated: 2024/10/24 10:45:26 by npizzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char *get_next_line(int fd)
{
	int i;
	int reminder_bytes;
	static char reminder[100][BUFFER_SIZE + 1] = {0};
	char *line;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd >= 100)
		return (NULL);
	line = NULL;
	if (reminder[fd][0] != 0)
	{
		i = 0;
		reminder_bytes = 0;
		while (reminder[fd][reminder_bytes] != 0)
			reminder_bytes++;
		line = malloc(reminder_bytes + 1);
		if (line == NULL)
			return (NULL);
		while (i <= reminder_bytes)
		{
			line[i] = reminder[fd][i];
			reminder[fd][i++] = 0;
		}
	}
	line = create_line(&line, reminder[fd], fd);
	return (line);
}
