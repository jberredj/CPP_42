# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/02 15:05:18 by jberredj          #+#    #+#              #
#    Updated: 2022/01/10 11:08:31 by jberredj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fixed

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp Fixed.cpp
OBJS		=	$(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJS):$(SRCS)
	$(CXX) $(CXXFLAGS) -c $?

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all