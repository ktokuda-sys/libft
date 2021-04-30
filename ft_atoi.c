/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktokuda <ktokuda@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 04:56:23 by ktokuda           #+#    #+#             */
/*   Updated: 2021/04/30 01:03:18 by ktokuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_islong(long int nbr, int n)
{
	long int	ov_div;
	long int	ov_mod;
	long int	tmp_nbr;

	ov_div = LONG_MAX / 10;
	ov_mod = LONG_MAX % 10;
	tmp_nbr = nbr;
	if (tmp_nbr > ov_div)
		return (-1);
	else if (tmp_nbr == ov_div)
	{
		if (n >= ov_mod)
			return (-1);
	}
	return (nbr);
}

int	ft_atoi_num(const char *str, int i, int sign)
{
	long int	nbr;

	nbr = 0;
	while (str[i] != '\0' && ('0' <= str[i] && str[i] <= '9'))
	{
		nbr = (10 * nbr) + (str[i] - '0');
		i++;
		if (sign == 1 && ft_islong(nbr, (str[i] - '0')) == -1)
			return (-1);
		else if (sign == -1 && ft_islong(nbr, (str[i] - '0')) == -1)
			return (0);
	}
	return (nbr);
}

int	ft_atoi(const char *str)
{
	long int	nbr;
	int			sign;
	int			i;
	int			flag;

	nbr = 0;
	sign = 1;
	i = 0;
	flag = 0;
	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	nbr = ft_atoi_num(str, i, sign);
	return (nbr * sign);
}

#ifdef TEST

int	main(void)
{
	const char		str1[] = "88888888888888888888";
	const char		str2[] = "LONG_MIN";
	int				num1;
	int				num2;

	num1 = ft_atoi(str1);
	num2 = ft_atoi(str2);
	printf("ft_atoi num1:%d\n", num1);
	printf("atoi num1:%d\n", atoi(str1));
	printf("ft_atoi num2:%d\n", num2);
	printf("atoi num2:%d\n", atoi(str2));
	return (0);
}

#endif
