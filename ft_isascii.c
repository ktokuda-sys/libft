/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 04:48:27 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 04:24:52 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

#ifdef TEST

int	main(void)
{
	int		c;

	c = 'B';
	if (ft_isascii(c) == 1)
		printf("return:%d\nASCII:%d is ascii\n", ft_isascii(c), c);
	else
		printf("return:%d\nASKII:%d is not ascii\n", ft_isascii(c), c);
	printf("----------------------\n");
	c = -5;
	if (ft_isascii(c) == 1)
		printf("return:%d\nASCII:%d is ascii\n", ft_isascii(c), c);
	else
		printf("return:%d\nASKII:%d is not ascii\n", ft_isascii(c), c);
	return (0);
}

#endif
