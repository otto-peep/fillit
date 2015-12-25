/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/24 19:21:52 by pconin            #+#    #+#             */
/*   Updated: 2015/12/25 16:07:22 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "headerfillit.h"

char	**update_map(int sqtall, char ascii, char **map)
{
	int x;
	int y;

	x = 0;
	y = -1;
	while (x < sqtall)
	{
		y = -1;
		while (y++ < sqtall - 1 && x < sqtall)
		{
			if (map[x][y] > ascii)
				map[x][y] = '.';
		}
		x++;
	}
	return (map);
}

char	**init_map(int sqtall, char **map)
{
	int	x;
	int	y;

	x = 0;
	y = -1;
	map = NULL;
	free(map);
	if (!(map = (char **)malloc(sizeof(char *) * 21)))
		error(4);
	while (x < 20)
	{
		y = -1;
		if (!(map[x] = ft_memalloc(21)))
			error(5);
		while (y++ < sqtall - 1 && x < sqtall)
				map[x][y] = '.';
		y--;
		while (y++ < 19)
			map[x][y] = '*';
		map[x][y] = '\0';
		x++;
	}
	map[20] = NULL;
	return (map);
}
