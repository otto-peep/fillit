/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 19:15:31 by pconin            #+#    #+#             */
/*   Updated: 2015/12/24 21:28:29 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "headerfillit.h"

void	resolution(p_list *tetri)
{
	char	**map;
	int		sqtall;

	sqtall = ft_min_sqtall(tetri);
	map = update_map(sqtall, map);
	return ;
}

