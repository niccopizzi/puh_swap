/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicco <nicco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 00:17:30 by nicco             #+#    #+#             */
/*   Updated: 2024/04/24 23:05:53 by nicco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	int		i;

	i = 0;
	while (s[i] != 0)
		i++;
	s2 = (char *)malloc((i + 1)* sizeof(char));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}