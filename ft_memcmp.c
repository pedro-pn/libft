/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:38:27 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/04/07 16:08:18 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		value;
	size_t	counter;

	counter = 0;
	value = 0;
	while (counter < n)
	{
		value = ((unsigned char *)s1)[counter] - ((unsigned char *)s2)[counter];
		if (value != 0)
			return (value);
		counter++;
	}
	return (value);
}
