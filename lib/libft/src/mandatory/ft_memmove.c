/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:19:40 by seozkan           #+#    #+#             */
/*   Updated: 2023/05/12 17:19:41 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (len == 0)
		return (dst);
	if (src < dst)
	{
		i = len - 1;
		while (i > 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
		((char *)dst)[0] = ((char *)src)[0];
	}
	else if (src > dst)
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
