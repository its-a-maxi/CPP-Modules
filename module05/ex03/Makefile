# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/22 11:43:49 by mmonroy-          #+#    #+#              #
#    Updated: 2021/03/11 18:34:27 by mmonroy-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp main.cpp

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
	$(RM) $(NAME) *_shrubbery

re:			fclean all

.PHONY:		all clean fclean re