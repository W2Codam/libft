/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:33:26 by lde-la-h      #+#    #+#                 */
/*   Updated: 2022/02/15 20:56:41 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*out;

	out = (t_list *)malloc(sizeof(t_list));
	if (out)
	{
		out->content = content;
		out->next = NULL;
		out->prev = NULL;
		return (out);
	}
	return (NULL);
}
