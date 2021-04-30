/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 05:37:11 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 02:50:25 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(const char *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
			word += 1;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (word);
}

#ifdef TEST2

int	main(void)
{
	printf("%zu\n", ft_wordcount("Hello World . ", ' '));
	return (0);
}

#endif
