/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiban <kchiban@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:07:12 by kchiban           #+#    #+#             */
/*   Updated: 2023/06/21 19:07:47 by kchiban          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (lst)
	{
		if (tmp)
		{
			while (tmp && tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = new;
			new->next = 0;
		}
		else
			*lst = new;
	}
}
