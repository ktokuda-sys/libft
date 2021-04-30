/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 02:56:56 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 02:06:02 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

#ifdef TEST

int	main(void)
{
	char	str[];
	char	*cha;

	cha = (char *)ft_memchr(str, '4', sizeof(str));
	if (cha != NULL)
		printf("return:%s\n", cha);
	else
		printf("no exist search_number");
	return (0);
}

#endif
