/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:01:49 by imiqor            #+#    #+#             */
/*   Updated: 2024/07/14 20:44:55 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	lent;
	int	*array;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	lent = max - min;
	array = (int *)malloc(sizeof(int) * lent);
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	index = 0;
	while (index < lent)
	{
		array[index] = min + index;
		index++;
	}
	*range = array;
	return (lent);
}
