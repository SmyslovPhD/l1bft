/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbraum <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 16:19:13 by kbraum            #+#    #+#             */
/*   Updated: 2021/06/29 15:05:43 by kbraum           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ctos(char c)
{
	char	*s;

	s = (char *)malloc(2 * sizeof(char));
	s[0] = c;
	s[1] = '\0';
	return (s);
}
