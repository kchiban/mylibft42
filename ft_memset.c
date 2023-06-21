/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiban <kchiban@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:47:17 by kchiban           #+#    #+#             */
/*   Updated: 2022/11/15 13:32:51 by kchiban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*n;

	i = 0;
	n = (unsigned char *)b;
	while (i < len)
	{
		n[i] = (unsigned char)c;
		i++;
	}
	return ((void *)(n));
}
