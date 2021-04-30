/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 04:04:54 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 04:33:05 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (s2[i] == '\0' || i == n)
		return (0);
	else
		return (-s2[i]);
}

#ifdef TEST

int	main(void)
{
	const char	str1[] = "abc12";
	const char	str2[] = "abcde";
	size_t		n;

	n = 3;
	if (ft_strncmp(str1, str2, n) == 0)
		printf("match %zubyte str1&str2\nstr1:%s, str2:%s\n", n, str1, str2);
	else
		printf("no match %zubyte str1&str2\nstr1:%s, str2:%s\n", n, str1, str2);
	printf("----------------------\n");
	n = 5;
	if (ft_strncmp(str1, str2, n) == 0)
		printf("match %zubyte str1&str2\nstr1:%s, str2:%s\n", n, str1, str2);
	else
		printf("no match %zubyte str1&str2\nstr1:%s, str2:%s\n", n, str1, str2);
	return (0);
}

#endif
