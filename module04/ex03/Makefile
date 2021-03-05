# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/22 11:43:49 by mmonroy-          #+#    #+#              #
#    Updated: 2021/03/05 19:09:18 by mmonroy-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp main1.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = ex03

FLAGS = -Wall -Wextra -Werror
CLANG = clang++ $(FLAGS)

RM = rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CLANG) $(OBJS) -o $(NAME)

clean:		
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re