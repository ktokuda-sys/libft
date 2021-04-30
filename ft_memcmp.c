/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 03:11:05 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 02:06:39 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_c;
	unsigned char	*s2_c;
	unsigned int	i;

	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_c[i] != s2_c[i])
			return (s1_c[i] - s2_c[i]);
		i++;
	}
	return (0);
}

#ifdef TEST

int	main(void)
{
	char	str1[];
	char	str2[];

	printf("%d\n", ft_memcmp(str1, str2, sizeof(str1)));
	if (ft_memcmp(str1, str2, 3) == 0)
		printf("3byte match");
	else
		printf("not match");
	return (0);
}

#endif
