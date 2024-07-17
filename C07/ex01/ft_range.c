/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:26:34 by imiqor            #+#    #+#             */
/*   Updated: 2024/07/14 20:57:35 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	index;

	if (max <= min)
	{
		return (0);
	}
	range = max - min;
	array = (int *)malloc(sizeof(int) * range);
	if (array == 0)
	{
		return (0);
	}
	index = 0;
	while (index < range)
	{
		array[index] = index + min;
		index++;
	}
	return (array);
}
