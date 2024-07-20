/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhali <salhali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:31:55 by imiqor            #+#    #+#             */
/*   Updated: 2024/07/15 15:17:38 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}



char	*get(int size, char **strs, char *sep)
{
	int		i;
	char	*buffer;
	int		sep_l;
	int		str_l;

	str_l = 0;
	i = 0;
	if (size == 0)
	{
		buffer = (char *)malloc(sizeof(char));
		*buffer = 0;
		return (buffer);
	}
	while (i < size)
	{
		str_l += ft_strlen(strs[i]);
		i++;
	}
	sep_l = ft_strlen(sep) * (size - 1);
	buffer = (char *)malloc(sep_l + str_l + 1);
	return (buffer);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*buffer;
	int		j;
	int		k;

	k = 0;
	buffer = get(size, strs, sep);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			buffer[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != 0 && i != size - 1 )
		{
			buffer[k++] = sep[j++];
		}
		i++;
	}
	buffer[k] = 0;
	return (buffer);
}

int	main(void)
 {
	char	*strs[] = {"Heo", "world", "this", "is", "ilias"};
	char	*sep;
 	char	*result;

 	sep = " --> ";
 	result = ft_strjoin(5, strs, sep);
	printf("%s\n", result);
 	free(result);
 	return (0);
 }
