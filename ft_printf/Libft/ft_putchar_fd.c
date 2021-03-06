/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:20:16 by azakizad          #+#    #+#             */
/*   Updated: 2022/05/04 18:00:52 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Function that writes the character 'c' to the file descriptor 'fd'.
 */

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
