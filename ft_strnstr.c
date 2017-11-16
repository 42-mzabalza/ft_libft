/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 23:09:18 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/12 18:55:38 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	if (strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (*haystack)
	{
		if ((i) + strlen(needle) > len)
			return (NULL);
		if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		i++;
		haystack++;
	}
	return (NULL);
}
