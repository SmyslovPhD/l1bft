/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbraum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:59:46 by kbraum            #+#    #+#             */
/*   Updated: 2021/06/29 15:23:55 by kbraum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	int		sign;
	char	*p;

	i = 1;
	if (n < 0)
		sign = -1;
	else
		sign = 1;
	while (n / ft_pow(10, i))
		i++;
	i += n < 0;
	p = (char *)malloc(i + 1);
	if (p == 0)
		return (p);
	p[i] = '\0';
	while (i--)
	{
		p[i] = n % 10 * sign + '0';
		n /= 10;
	}
	if (sign < 0)
		p[0] = '-';
	return (p);
}
