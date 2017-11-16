/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzabalza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 19:34:39 by mzabalza          #+#    #+#             */
/*   Updated: 2017/11/16 22:31:54 by mzabalza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*scpy;

	i = 0;
	scpy = (char *)&s[ft_strlen(s)];
	while (i++ < ft_strlen(s))
	{
		if (*scpy == c)
		{
			return (scpy);
		}
		scpy--;
	}
	return (NULL);
}
