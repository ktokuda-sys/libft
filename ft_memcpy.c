/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 18:48:10 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 02:08:19 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (n--)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

#ifdef TEST

int	main(void)
{
	char	str1[];
	char	str2[];

	printf("%s\n", str1);
	printf("%s\n", ft_memcpy(str1, str2, 2));
	printf("%s\n", str1);
	return (0);
}

#endif
