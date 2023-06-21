/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiban <kchiban@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:26:39 by kchiban           #+#    #+#             */
/*   Updated: 2022/11/13 00:18:12 by kchiban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*a;

	i = 0;
	a = malloc(ft_strlen(s1) + 1);
	if (!a)
		return (0);
	ft_strlcpy(a, s1, ft_strlen(s1) + 1);
	return (a);
}
