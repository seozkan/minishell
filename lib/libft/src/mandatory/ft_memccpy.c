/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:19:09 by seozkan           #+#    #+#             */
/*   Updated: 2023/05/12 17:19:10 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_copy;
	unsigned char	*src_copy;
	size_t			i;

	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_copy[i] = src_copy[i];
		if (src_copy[i] == (unsigned char) c)
			break ;
		i++;
	}
	if (i == n)
		return (NULL);
	else
		return (dst + i + 1);
}
