/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 07:45:45 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 03:08:26 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*join;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	j = -1;
	join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!join)
		return (NULL);
	while (s1[++i])
		join[i] = s1[i];
	while (s2[++j])
		join[i++] = s2[j];
	join[i] = '\0';
	return (join);
}

#ifdef TEST

int	main(void)
{
	printf("%s\n", ft_strjoin("Hello ", "World!"));
	return (0);
}

#endif
