/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbraum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:05:15 by kbraum            #+#    #+#             */
/*   Updated: 2021/06/29 16:01:26 by kbraum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (s == 0)
		return (0);
	p = 0;
	if (start >= ft_strlen(s))
		len = 0;
	p = (char *)malloc(len + 1);
	if (p)
		ft_strlcpy(p, &(s[start]), len + 1);
	return (p);
}
