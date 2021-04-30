/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 18:12:43 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 01:04:08 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

#ifdef TEST

int	main(void)
{
	int			i;
	char		str[];

	i = 0;
	ft_bzero(str + 1, 3);
	while (i < 5)
	{
		printf("%c, ", str[i]);
		i++;
	}
	return (0);
}

#endif
