/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtolower.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 17:45:49 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 13:33:31 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lower_it(char *c)
{
	*c = ft_tolower(*c);
}

void	ft_strtolower(char *str)
{
	ft_striter(str, &ft_lower_it);
}
