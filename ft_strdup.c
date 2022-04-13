/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:08:47 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/04/13 18:56:06 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	s_len;
	size_t	counter;

	s_len = ft_strlen(s);
	counter = 0;
	ptr = (char *) malloc((s_len * sizeof(char)) + 1);
	while (counter < s_len + 1)
	{
		ptr[counter] = s[counter];
		counter++;
	}
	return (ptr);
}
