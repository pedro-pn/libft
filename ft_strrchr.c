/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:43:22 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/04/12 16:02:02 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(char *str)
{
	size_t	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = (int) ft_strlen((char *)s);
	while (counter >= 0)
	{
		if ((unsigned char) s[counter] == (unsigned char) c)
			return (&((char *)s)[counter]);
		counter--;
	}
	return (NULL);
}
