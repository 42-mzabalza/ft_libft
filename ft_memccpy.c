/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:47:03 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/16 22:22:32 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dstcpy;
	unsigned const char *srccpy;

	dstcpy = (unsigned char *)dst;
	srccpy = (unsigned char *)src;
	while (n-- > 0)
	{
		*dstcpy++ = *srccpy++;
		if (*srccpy == (unsigned char)c)
		{
			*dstcpy++ = *srccpy++;
			return ((void*)dstcpy);
		}
	}
	return (NULL);
}
