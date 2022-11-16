/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:13:40 by ael-kace          #+#    #+#             */
/*   Updated: 2022/11/13 23:01:23 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*mot;
	size_t	i;
	size_t	j;

	str = (char *) haystack;
	mot = (char *) needle;
	i = 0;
	if (mot[i] == '\0')
		return ((char *) str);
	if (str[i] == 0 && mot[i] == 0)
		return (0);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == mot[j] && mot[j] && i + j < len)
			j++;
		if (mot[j] == '\0')
			return ((char *) str + i);
		i++;
	}
	return (0);
}
