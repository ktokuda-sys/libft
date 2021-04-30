/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 05:14:43 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 04:31:58 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}

#ifdef TEST

int	main(void)
{
	int		c;

	c = 'd';
	printf("%c, %c\n", c, ft_toupper(c));
	c = 'D';
	printf("%c, %c\n", c, ft_toupper(c));
	return (0);
}

#endif
