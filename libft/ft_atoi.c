/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npizzi <npizzi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:29:49 by nicco             #+#    #+#             */
/*   Updated: 2024/10/31 11:44:52 by npizzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	atoi;
	int	i;
	int	sign;

	atoi = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(nptr[i]) == true)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		if (nptr[i + 1] == '+' || nptr[i + 1] == '-')
			return (0);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		atoi = (atoi * 10) + (nptr[i] - 48);
		i++;
	}
	return (atoi * sign);
}
