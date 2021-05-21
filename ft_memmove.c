/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunwkim <hyunwkim@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:48:17 by hyunwkim          #+#    #+#             */
/*   Updated: 2021/05/20 18:36:33 by hyunwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;
	size_t			i;

	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	i = 0;
	if (!src && !len)
		return (dst);
	while (dst < src && i < len)
	{
		dst2[i] = src2[i];
		i++;
	}
	while (src < dst && i < len)
	{
		dst2[len - i - 1] = src2[len - i - 1];
		i++;
	}
	return (dst);
}
