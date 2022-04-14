/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppaulo-d < ppaulo-d@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:58:30 by ppaulo-d          #+#    #+#             */
/*   Updated: 2022/04/13 18:57:45 by ppaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		mem;
	size_t	s_len;

	mem = 0;
	s_len = ft_strlen(s);
	mem = s_len - start;
	if (mem > (int) len)
		mem = len;
	if (mem <= 0)
	{
		sub = ((char *) malloc(1));
		sub[0] = 0;
		return (sub);
	}
	sub = (char *) malloc((mem * sizeof(char)) + 1);
	if (start < s_len)
		ft_strlcpy(sub, &s[start], mem + 1);
	return (sub);
}
