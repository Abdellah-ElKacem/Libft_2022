/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:17:07 by ael-kace          #+#    #+#             */
/*   Updated: 2022/11/15 15:23:25 by ael-kace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*ddst;
	unsigned char		*ssrc;

	ddst = (unsigned char *) dest;
	ssrc = (unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (dest >= src)
	{
		while (len--)
			ddst[len] = ssrc[len];
	}
	else
		ft_memcpy(ddst, ssrc, len);
	return (dest);
}
