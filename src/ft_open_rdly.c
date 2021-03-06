/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_rdly.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banthony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 16:18:58 by banthony          #+#    #+#             */
/*   Updated: 2016/01/24 18:42:11 by banthony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "lib_fillit.h"

int	ft_open_rdly(char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_error();
	return (fd);
}
