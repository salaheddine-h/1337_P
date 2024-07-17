/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:25:13 by imiqor            #+#    #+#             */
/*   Updated: 2024/07/15 14:25:14 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
char	*ft_itoa_base(int nbr, char *base);
int		ft_check(char *base);

int	get_base_len(char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	return (base_len);
}

int	get_num_len(int nbr, int base_len)
{
	int		len;
	long	num;

	num = nbr;
	len = 0;
	if (nbr <= 0)
		len = 1;
	while (num != 0)
	{
		num /= base_len;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		base_len;
	int		len;
	char	*result;
	int		sign;
	long	num;

	base_len = get_base_len(base);
	len = get_num_len(nbr, base_len);
	sign = 1;
	if (nbr < 0)
		sign = -1;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	num = nbr;
	while (num != 0)
	{
		result[--len] = base[num % base_len];
		num /= base_len;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*result;

	if (!ft_check(base_from) || !ft_check(base_to))
		return (NULL);
	if (*nbr == '0')
	{
		result = (char*)malloc(sizeof(char)*2);
		if(!result)
			return 0;
		result[0] = '0';
		result[1] = '\0';
		return(result);
	}
	num = ft_atoi_base(nbr, base_from);
	result = ft_itoa_base(num, base_to);
	return (result);
}

int	main(void)
{
	char	*result;

	result = ft_convert_base("0", "0123456789", "01");
	printf("%s\n", result);
	free(result);
	return (0);
}