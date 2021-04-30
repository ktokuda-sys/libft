/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 05:03:11 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 02:02:16 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
		return (1);
	else
		return (0);
}

#ifdef TEST

int	main(void)
{
	int		c;

	c = 'A';
	if (ft_isprint(c) == 1)
		printf("return:%d\nASCII:%d can display\n", ft_isprint(c), c);
	else
		printf("return:%d\nASCII:%d can't display\n", ft_isprint(c), c);
	printf("---------------\n");
	c = '\n';
	if (ft_isprint(c) == 1)
		printf("return:%d\nASCII:%d can display\n", ft_isprint(c), c);
	else
		printf("return:%d\nASCII:%d can't display\n", ft_isprint(c), c);
	return (0);
}

#endif
