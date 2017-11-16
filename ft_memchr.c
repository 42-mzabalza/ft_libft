/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 00:43:35 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/17 00:11:03 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *scpy;

	scpy = (char *)s;
	while (*scpy && n-- > 0)
	{
		if (*++scpy == c)
			return (scpy);
	}
	return (NULL);
}
