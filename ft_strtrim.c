/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 08:00:19 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 04:30:43 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*strtrim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	strtrim = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!strtrim)
		return (NULL);
	i = 0;
	while (start < end)
		strtrim[i++] = s1[start++];
	strtrim[i] = '\0';
	return (strtrim);
}

#ifdef TEST

int	main(void)
{
	const char	s1[] = "././/.Apple././o/";
	const char	set[] = "./o";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}

#endif
