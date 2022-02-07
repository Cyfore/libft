/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:02:21 by eulker            #+#    #+#             */
/*   Updated: 2022/02/03 14:51:00 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	last_index;

	last_index = ft_strlen(s) - 1;
	if (s[last_index + 1] == (char)c)
		return ((char *)(s + ft_strlen(s)));
	while (last_index >= 0 && s[last_index])
	{
		if (s[last_index] == (char)c)
			return ((char *)(s + last_index));
		last_index--;
	}
	return (NULL);
}
