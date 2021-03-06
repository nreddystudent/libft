/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreddy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:08:52 by nreddy            #+#    #+#             */
/*   Updated: 2019/05/28 16:23:47 by nreddy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	y;
	size_t	x;

	x = ft_strlen(s1);
	y = 0;
	while (s2[y] != '\0')
	{
		if (n > 0)
		{
			s1[x] = s2[y];
			x++;
			y++;
			n--;
		}
		else
			break ;
	}
	s1[x] = '\0';
	return (s1);
}
