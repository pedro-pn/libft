/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:08:56 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/04/13 18:24:18 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_str;
	size_t	counter_str;
	size_t	counter_s;

	len_s1 = ft_strlen((char *) s1);
	len_str = len_s1 + ft_strlen((char *) s2);
	counter_str = -1;
	counter_s = -1;
	str = (char *) malloc((sizeof(char) * len_str) + 1);
	while (counter_str++, counter_s++, counter_str <= len_str)
	{
		if (counter_str < len_s1 && s1[counter_s] != 0)
			str[counter_str] = s1[counter_s];
		else if (counter_str == len_s1 && s1[counter_s] == 0 && len_s1 != 0)
		{
			counter_s = -1;
			counter_str--;
		}
		else
			str[counter_str] = s2[counter_s];
	}
	return (str);
}
