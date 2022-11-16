/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:55:13 by ael-kace          #+#    #+#             */
/*   Updated: 2022/11/12 14:07:56 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *)s;
	i = ft_strlen(s);
	if (c == '\0')
		return (ptr + i);
	while (i != 0)
	{
		if (ptr[i] == (char)c)
			return (ptr + i);
		i--;
	}
	if (s[0] == (char)c)
		return (ptr);
	return (0);
}
