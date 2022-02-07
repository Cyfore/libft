/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:01:47 by eulker            #+#    #+#             */
/*   Updated: 2022/02/03 01:28:14 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (!find[0])
		return ((char *)str);
	while (str[i] && i < len)
	{
		while (str[i + c] == find[c] && i + c < len && find[c])
			c++;
		if (!find[c])
			return ((char *)str + i);
		c = 0;
		i++;
	}
	return (NULL);
}
