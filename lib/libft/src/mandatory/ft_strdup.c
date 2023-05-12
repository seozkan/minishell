/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan <seozkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:20:36 by seozkan           #+#    #+#             */
/*   Updated: 2023/05/12 17:20:40 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len_s1;
	char	*s2;

	len_s1 = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (len_s1 + 1));
	if (s2 == NULL)
		return (NULL);
	s2 = (char *)ft_memcpy(s2, s1, len_s1 + 1);
	return (s2);
}
