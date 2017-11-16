/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 00:59:04 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/16 22:23:57 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1cpy;
	unsigned char *s2cpy;

	s1cpy = (unsigned char *)s1;
	s2cpy = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*s1cpy != *s2cpy)
			return (*(s1cpy) - *(s2cpy));
		if (n)
		{
			s1cpy++;
			s2cpy++;
		}
	}
	return (*s1cpy - *s2cpy);
}
