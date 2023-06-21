/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiban <kchiban@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:22:51 by kchiban           #+#    #+#             */
/*   Updated: 2022/11/12 20:58:18 by kchiban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*as1;
	unsigned char	*as2;
	size_t			i;

	i = 0;
	as1 = (void *)s1;
	as2 = (void *)s2;
	while (i < n)
	{
		if (as1[i] != as2[i])
			return (as1[i] - as2[i]);
		i++;
	}
	return (0);
}
