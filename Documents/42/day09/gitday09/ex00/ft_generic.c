/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 08:25:43 by rviale            #+#    #+#             */
/*   Updated: 2016/08/19 08:25:51 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void)
{
	write(1, "Tu tu tu tu ; Tu tu tu tu\n", 26);
}

int		main(void)
{
	ft_generic();
	return (0);
}
