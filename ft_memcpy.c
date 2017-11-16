/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 23:33:59 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/16 22:23:11 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dstcpy;
	char *srccpy;

	dstcpy = (char *)dst;
	srccpy = (char *)src;
	while (n-- > 0)
	{
		*dstcpy = *srccpy;
		dstcpy++;
		srccpy++;
	}
	return (dst);
}
