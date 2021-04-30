/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 06:16:36 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 02:10:35 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(int nbr)
{
	int		len;

	len = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		len += 1;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

#ifdef TEST

int	main(void)
{
	printf("%zu\n", ft_nbrlen(12345));
	printf("%zu\n", ft_nbrlen(-12));
	return (0);
}

#endif
