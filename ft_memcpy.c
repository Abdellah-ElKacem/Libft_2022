/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:21:49 by ael-kace          #+#    #+#             */
/*   Updated: 2022/11/15 17:19:59 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;
	size_t		i;

	s1 = dst;
	s2 = src;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
#include <stdio.h>
#include <string.h>
int main ()
{
	printf("%s \n", ft_memcpy("abds", "abdc", 6));
	printf("%s", memcpy("abds", "abdc", 6));
}