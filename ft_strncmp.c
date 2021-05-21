/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunwkim <hyunwkim@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:14:08 by hyunwkim          #+#    #+#             */
/*   Updated: 2021/05/21 20:48:30 by hyunwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			cnt;
	unsigned char	*us1;
	unsigned char	*us2;

	if (!n)
		return (0);
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	cnt = 0;
	while (*us1 == *us2 && *us1 && *us2 && cnt < n)
	{
		cnt++;
		us1++;
		us2++;
	}
	if (cnt == n)
		return (*(--us1) - *(--us2));
	return (*us1 - *us2);
}
