/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 20:07:34 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 01:23:28 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

#ifdef TEST

int	main(void)
{
	int		c;

	c = 'B';
	if (ft_isalpha(c) == 1)
		printf("return:%d\nASCII:%d is alphabet\n", ft_isalpha(c), c);
	else
		printf("return:%d\nASCII:%d is not alphabet\n", ft_isalpha(c), c);
	printf("----------------------\n");
	c = '5';
	if (ft_isalpha(c) == 1)
		printf("return:%d\nASCII:%d is alphabet\n", ft_isalpha(c), c);
	else
		printf("return:%d\nASCII:%d is not alphabet\n", ft_isalpha(c), c);
	return (0);
}

#endif
