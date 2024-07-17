/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:24:36 by imiqor            #+#    #+#             */
/*   Updated: 2024/07/14 20:52:20 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	if (src == 0)
		return (0);
	i = 0;
	while (src[i])
	i++;

	dest = (char *)malloc((sizeof(char) * i)+1);
	i = 0;
	if (dest == 0)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
int	main(void)
{
	char array[] = "imane";
	printf("%s", ft_strdup(array));
	return (0);
}
*/
