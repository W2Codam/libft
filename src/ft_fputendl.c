/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fputendl.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 10:33:39 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 10:42:42 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fputendl(const char *s, t_i32 fd)
{
	ft_fputstr(s, fd);
	ft_fputchar('\n', fd);
}
