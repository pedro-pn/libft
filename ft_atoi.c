/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:38:47 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/04/12 20:12:59 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_spc(char c)
{
	if (c == '\n' || c == ' ' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

static int	check_sign(const char *nptr)
{
	int	counter;
	int	sign;

	counter = 0;
	sign = 0;
	while (nptr[counter])
	{
		if ((! check_spc(nptr[counter]) && nptr[counter] != '-'
				&& nptr[counter] != '+'))
			break ;
		if ((nptr[counter] == '-' || nptr[counter] == '+')
			&& nptr[counter + 1] >= 48 && nptr[counter + 1] <= 57)
		{	
			if (nptr[counter] == '-')
				sign = -1;
			else if (nptr[counter] == '+')
				sign = 1;
			break ;
		}
		else if (nptr[counter] == '-' || nptr[counter] == '+')
			break ;
		counter++;
	}
	return (sign);
}

static int	convert(const char *nptr, int sign)
{
	int	atoi;
	int	index;
	int	flag;

	atoi = 0;
	index = -1;
	flag = 0;
	while (index++, nptr[index])
	{
		if (nptr[index] == '-' || nptr[index] == '+' || check_spc(nptr[index]))
		{
			if (((nptr[index] == '-' || nptr[index] == '+') && (sign == 0
						|| flag == 1)) || (flag != 0 && check_spc(nptr[index])))
				break ;
		}
		else if (nptr[index] >= 48 && nptr[index] <= 57)
		{
			atoi = 10 * atoi + nptr[index] - 48;
			flag = 1;
		}
		else
			break ;
	}
	return (atoi);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	atoi;

	sign = check_sign(nptr);
	atoi = convert(nptr, sign);
	if (sign == -1)
		return (atoi * sign);
	return (atoi);
}
