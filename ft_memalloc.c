/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 23:29:12 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/17 00:25:38 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		i;
	char	*dst;

	dst = (void *)malloc(sizeof(*dst) * size);
	if (dst <= 0)
		return (NULL);
	i = 0;
	while (dst[i])
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
