/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imiqor <imiqor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:33:44 by imiqor            #+#    #+#             */
/*   Updated: 2024/07/15 14:22:16 by imiqor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check(char *base)
{
	int	size;
	int	i;
	int	j;

	i = 0;
	size = ft_strlen(base);
	if (size <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_char_to_digit(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str, char *base)
{
	int	result;
	int	sign;
	int	i;
	int	digit;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		digit = ft_char_to_digit(str[i], base);
		if (digit == -1)
			break ;
		result = (result * ft_strlen(base)) + digit;
		i++;
	}
	return (result * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	is_checked;

	is_checked = ft_check(base);
	if (is_checked != 1)
	{
		return (0);
	}
	return (ft_atoi(str, base));
}

