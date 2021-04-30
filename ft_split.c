/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 08:18:48 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 02:50:11 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**split;

	i = 0;
	k = 0;
	split = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!s || !split)
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		split[i] = (char *)malloc(sizeof(char) * (ft_wordlen(&s[k], c) + 1));
		if (!split[i])
			return (NULL);
		j = 0;
		while (s[k] == c)
			k += 1;
		while (s[k] != c && s[k])
			split[i][j++] = s[k++];
		split[i][j] = '\0';
		i += 1;
	}
	split[i] = NULL;
	return (split);
}

#ifdef TEST

int	main(void)
{
	char			**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split("Hello ft_split completed", ' ');
	while (tab[i])
	{
		printf("String %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}

#endif
