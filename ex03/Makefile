# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/02 15:05:18 by jberredj          #+#    #+#              #
#    Updated: 2022/01/10 21:26:31 by jberredj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	DiamondTrap

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

SRCS		=	main.cpp ScavTrap.cpp ClapTrap.cpp FragTrap.cpp DiamondTrap.cpp
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