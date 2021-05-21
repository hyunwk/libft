/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunwkim <hyunwkim@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:54:36 by hyunwkim          #+#    #+#             */
/*   Updated: 2021/05/07 21:25:08 by hyunwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	size_t			idx;
	unsigned char	*p;

	p = (unsigned char*)b;
	idx = 0;
	while (idx < len)
		p[idx++] = c;
	return (b);
}
