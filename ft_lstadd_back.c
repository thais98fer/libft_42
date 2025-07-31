/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:33:11 by thais.fer         #+#    #+#             */
/*   Updated: 2025/07/30 16:41:32 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;	
}
