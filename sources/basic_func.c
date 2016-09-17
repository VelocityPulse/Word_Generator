/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <jlasne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 14:04:25 by jlasne            #+#    #+#             */
/*   Updated: 2016/09/17 11:42:16 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/word_gen.h"
#include <unistd.h>

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
			i++;
	return (i);
}

int		ft_putchar(char c)
{
	int i;

	i = write(1, &c, 1);
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strdup(const char *s)
{
	int size_s;
	int i;
	char *ret;

	i = -1;
	size_s = ft_strlen(s);
	if (!(ret = (char *)malloc((size_s + 1) * sizeof(char))))
			return (NULL);
	while (s[++i] != '\0')
		ret[i] = s[i];
	ret[i] = '\0';
	return (ret);
}