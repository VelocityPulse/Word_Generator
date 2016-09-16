#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: jlasne <jlasne@student.42.fr>              +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/09/16 13:53:28 by jlasne            #+#    #+#             *#
#*   Updated: 2016/09/16 13:53:55 by jlasne           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = word_gen

SRC = sources/*.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean : clean
	rm -f *.o

re: clean all