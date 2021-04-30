/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 07:58:37 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 04:22:04 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

#ifdef TEST2

int	main(void)
{
	const char	str1[] = "Apple";
	const char	str2[] = "";

	printf("%lu\n", ft_strlen(str1));
	printf("%lu\n", ft_strlen(str2));
	return (0);
}

#endif
