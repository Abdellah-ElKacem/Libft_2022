/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:04:04 by ael-kace          #+#    #+#             */
/*   Updated: 2022/11/12 14:06:10 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (!s1 && !s2)
		return (0);
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && i < (n - 1))
		i++;
	return ((unsigned char )str1[i] - (unsigned char )str2[i]);
}
