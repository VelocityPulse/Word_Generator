/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <jlasne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 11:05:26 by jlasne            #+#    #+#             */
/*   Updated: 2016/09/16 11:10:25 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <time.h>

int		ft_rand(int min, int max)
{
	time_t	t;
	int		ret;
	// Intializes random number generator
	srand((unsigned)time(&t));
	ret = (rand() % max) + min;
	return (ret);
}
