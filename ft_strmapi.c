/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:02:23 by eulker            #+#    #+#             */
/*   Updated: 2022/02/07 19:02:24 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		len;
	int		s_index;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	s_index = 0;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	while (s[s_index])
	{
		ret[s_index] = f(s_index, s[s_index]);
		s_index++;
	}
	ret[s_index] = '\0';
	return (ret);
}
