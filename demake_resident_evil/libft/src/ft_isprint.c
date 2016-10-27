/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbougrin <mbougrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:55:38 by mbougrin          #+#    #+#             */
/*   Updated: 2013/11/30 02:52:36 by mbougrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_isprint(int c)
{
	if (c < 31 || c > 127)
		return (0);
	return (1);
}
