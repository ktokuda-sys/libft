/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 08:09:03 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 04:21:44 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

#ifdef TEST

int	main(void)
{
	char		dst[];
	const char	src[];

	printf("dst = %s, src = %s, size_t = 4\n", dst, src);
	ft_strlcpy(dst, src, 4);
	printf("%s, %zu\n", dst, ft_strlcpy(dst, src, 4));
	return (0);
}

#endif
