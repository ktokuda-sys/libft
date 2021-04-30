/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 20:43:54 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 02:00:19 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

#ifdef TEST

int	main(void)
{
	int		c;

	c = 'B';
	if (ft_isdigit(c) == 1)
		printf("return:%d\nASCII:%d is number\n", ft_isdigit(c), c);
	else
		printf("return:%d\nASCII:%d is not number\n", ft_isdigit(c), c);
	printf("----------------------\n");
	c = '5';
	if (ft_isdigit(c) == 1)
		printf("return:%d\nASCII:%d is number\n", ft_isdigit(c), c);
	else
		printf("return:%d\nASCII:%d is not number\n", ft_isdigit(c), c);
	return (0);
}

#endif
