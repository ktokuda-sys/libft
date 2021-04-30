/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 02:50:47 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 04:32:34 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	s_len;

	s_len = ft_strlen((char *)s);
	while (s_len != 0 && s[s_len] != (char)c)
		s_len--;
	if (s[s_len] == (char)c)
		return ((char *)&s[s_len]);
	return (NULL);
}

#ifdef TEST

int	main(void)
{
	const char	str[] = "Hello,World!!!";
	const char	*p;

	p = ft_strrchr(str, '\0');
	printf("search from the back and display\nresult:%s\n", p);
	return (0);
}

#endif
