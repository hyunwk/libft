/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunwkim <hyunwkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 21:32:47 by hyunwkim          #+#    #+#             */
/*   Updated: 2021/05/20 15:58:17 by hyunwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t len_src;

	if (!src)
		return (0);
	i = 0;
	len_src = 0;
	while (src[i])
	{
		len_src++;
		i++;
	}
	i = 0;
	if (dstsize == 0)
		return (len_src);
	while (i++ < dstsize - (size_t)1 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (len_src);
}
