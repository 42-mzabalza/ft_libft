/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 00:28:00 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/17 00:26:24 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*dst;

	dst = malloc(sizeof(*dst) * (size + 1));
	if (dst <= 0)
		return (NULL);
	i = 0;
	while (dst[i])
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
