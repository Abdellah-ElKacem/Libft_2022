/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:13:16 by ael-kace          #+#    #+#             */
/*   Updated: 2022/11/12 14:08:50 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	cr;
	int		i;

	i = 0;
	ptr = (char *)s;
	cr = (char )c;
	while (ptr[i] != cr)
	{
		if (ptr[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (ptr + i);
}
