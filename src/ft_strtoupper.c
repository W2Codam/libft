/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtoupper.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 17:44:56 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 13:33:29 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_upper_it(char *c)
{
	*c = ft_toupper(*c);
}

void	ft_strtoupper(char *str)
{
	ft_striter(str, &ft_upper_it);
}
