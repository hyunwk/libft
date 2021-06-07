/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunwkim <hyunwkim@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:00:16 by hyunwkim          #+#    #+#             */
/*   Updated: 2021/06/07 22:19:08 by hyunwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t		front;
	size_t		rear;

	front = 0;
	rear = ft_strlen(s1) - 1;
	if (!set)
		return ((char *)s1);
	while (s1[front] && ft_strrchr(set, s1[front]))
		front++;
	if (!s1 || front == ft_strlen(s1))
		return (ft_strdup(""));
	while (s1[rear] && ft_strrchr(set, s1[rear]))
		rear--;
	return (ft_substr(s1, front, rear - front + 1));
}
