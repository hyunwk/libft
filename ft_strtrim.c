/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunwkim <hyunwkim@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:00:16 by hyunwkim          #+#    #+#             */
/*   Updated: 2021/06/07 17:21:29 by hyunwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			count_set(const char *s, const char *set, size_t i)
{
	size_t		idx;
	size_t		len;

	len = 0;
	while (*s)
	{
		idx = 0;
		while (*s != set[idx])
			idx++;
		if (idx >= ft_strlen(set))
			break ;
		s += i;
		len++;
	}
	return (len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char		*ptr;
	size_t		front_len;
	size_t		rear_len;

	if (!s1)
		return (0);
	front_len = count_set(s1, set, 1);
	if (front_len == ft_strlen(s1))
		return (ft_strdup(""));
	rear_len = count_set(s1 + ft_strlen(s1) - 1, set, -1);
//	if (!(ptr = (char *)malloc((ft_strlen(s1) - front_len - rear_len + 1))))
//		return (NULL);
//	ft_strlcpy(ptr, s1 + front_len, ft_strlen(s1) - front_len - rear_len + 1);
	ptr = ft_substr(s1, front_len, rear_len);
	return (ptr);
}
