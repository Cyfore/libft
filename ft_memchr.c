/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:30 by eulker            #+#    #+#             */
/*   Updated: 2022/02/07 17:44:31 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t len)
{
	unsigned char	*nptr;
	unsigned char	nc;

	nptr = (unsigned char *)ptr;
	nc = (unsigned char)c;
	while (len > 0)
	{
		if (*nptr == nc)
			return (nptr);
		nptr++;
		len--;
	}
	return (NULL);
}
