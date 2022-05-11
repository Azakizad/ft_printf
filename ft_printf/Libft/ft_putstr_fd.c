/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:01:18 by azakizad          #+#    #+#             */
/*   Updated: 2022/05/04 18:02:20 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that writes the string 's' to the file descriptor 'fd'.
 */

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
	{
		write (fd, s, ft_strlen(s));
	}
}
