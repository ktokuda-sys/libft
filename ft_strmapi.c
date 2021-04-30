/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 06:58:22 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 04:23:02 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

#ifdef TEST2

char	func(unsigned int i, char str)
{
	printf("Display: i = %d, %c\n", i, str);
	return (str - 32);
}

int	main(void)
{
	char			str[];

	printf("Str is %s\n", str);
	printf("Result is %s\n", ft_strmapi(str, func));
	return (0);
}

#endif
