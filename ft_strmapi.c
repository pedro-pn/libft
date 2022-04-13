/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:39:23 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/04/13 18:57:03 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	size_t	index;
	char	*map_str;

	s_len = ft_strlen(s);
	map_str = (char *) malloc((s_len * sizeof(char)) + 1);
	index = 0;
	while (index < s_len)
	{
		map_str[index] = (*f)(index, s[index]);
		index++;
	}
	map_str[index] = 0;
	return (map_str);
}
