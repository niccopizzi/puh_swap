/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npizzi <npizzi@student42.lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:58:21 by nicco             #+#    #+#             */
/*   Updated: 2024/08/27 10:08:00 by npizzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 2048
#endif


char *create_line(char **line, char *reminder, int fd);
int check_for_n(char **line, char *reminder);
char *get_next_line(int fd);

#endif