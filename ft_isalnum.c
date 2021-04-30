/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 20:51:29 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 01:12:05 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9'))
		return (1);
	else
		return (0);
}

#ifdef TEST

int	main(void)
{
	int		c;

	c = 'B';
	if (ft_isalnum(c) == 1)
		printf("return:%c\nASCII:%c is alphabet or number\n", ft_isalnum(c), c);
	else
		printf("return:%c\nASCII:%c is not alpha or num\n", ft_isalnum(c), c);
	printf("----------------------\n");
	c = '5';
	if (ft_isalnum(c) == 1)
		printf("return:%c\nASCII:%c is alphabet or number\n", ft_isalnum(c), c);
	else
		printf("return:%c\nASCII:%c is not alpha or num\n", ft_isalnum(c), c);
	return (0);
}

#endif
