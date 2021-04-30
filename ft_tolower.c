/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 06:12:50 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 04:33:36 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}

#ifdef TEST

int	main(void)
{
	int		c;

	c = 'd';
	printf("%c, %c\n", c, ft_tolower(c));
	c = 'D';
	printf("%c, %c\n", c, ft_tolower(c));
	return (0);
}

#endif
