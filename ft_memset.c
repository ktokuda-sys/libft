/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:15:52 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 02:09:29 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*b_c;

	i = 0;
	b_c = (unsigned char *)b;
	while (len--)
	{
		b_c[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

#ifdef TEST2

int	main(void)
{
	char	*str;

	printf("%s\n", str);
	ft_memset(str, '1', 3);
	printf("%s\n", str);
	return (0);
}

#endif
