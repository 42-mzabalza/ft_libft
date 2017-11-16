/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:00:24 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/16 22:33:08 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*dst;

	if (s != NULL)
	{
		dst = (char *)malloc(sizeof(*dst) * (len + 1));
		if (dst <= 0)
			return (NULL);
		i = 0;
		while (s[start])
		{
			dst[i] = s[start];
			start++;
			i++;
		}
		dst[len] = '\0';
		return (dst);
	}
	return (NULL);
}
