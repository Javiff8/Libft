/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javferna <javferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:31:36 by javferna          #+#    #+#             */
/*   Updated: 2021/09/15 14:45:14 by javferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*cast_src;
	char		*cast_dst;
	size_t		i;

	if (src == NULL && dst == NULL)
		return (NULL);
	cast_src = src;
	cast_dst = dst;
	i = -1;
	while (++i < n)
		cast_dst[i] = cast_src[i];
	return (dst);
}
