/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 07:06:01 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 02:44:41 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			nbytes;
	char			*addr;

	nbytes = count * size;
	addr = malloc(nbytes);
	if (!addr)
		return (NULL);
	ft_memset(addr, 0, nbytes);
	return ((void *)addr);
}

#ifdef TEST

int	main(void)
{
	int				i;
	int				*ptr;
	int				nmemb;

	i = 0;
	nmemb = 9;
	ptr = (int *)calloc(nmemb, 4);
	if (ptr == NULL)
		return (0);
	while (i <= nmemb)
	{
		printf(" %d", ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}

#endif
