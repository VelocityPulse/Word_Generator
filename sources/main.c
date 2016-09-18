/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <jlasne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 10:15:56 by jlasne            #+#    #+#             */
/*   Updated: 2016/09/18 13:52:40 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/word_gen.h"

int		main(int argc, char **argv)
{
	t_word_gen		var;

	var.w_nb = ft_atoi(argv[1]);
	var.w_size = ft_atoi(argv[2]);
	if (argc != 3)
		return (-1);
	print_error(generator(&var));
	return (0);
}
