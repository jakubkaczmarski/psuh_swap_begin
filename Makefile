# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 21:48:26 by Cerdelen          #+#    #+#              #
#    Updated: 2022/01/04 21:48:26 by Cerdelen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

# CFLAGS = -Wextra -Wall -Werror

NAME = push_swap

AR = ar rcs

SRCS = 	helperfunctionsforlists.c  operation_pa.c  operation_ra.c  operation_rr.c   operation_rrb.c  operation_sa.c  operation_ss.c\
		createinput.c  main.c operation_pb.c  operation_rb.c  operation_rra.c  operation_rrr.c  operation_sb.c sortbigstack.c reapply_values.c\
		check_arguments.c ft_atolong.c sort_small.c posible_3_value_permutations.c

# SRCS =  createinput.c atolongi.c main.c
# SRCS = test.c		

OBJS = $(SRCS:.c=.o)

all: $(OBJS)
	$(MAKE) bonus -C Libft
	$(AR) $(NAME).a $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) push_swap.a ./Libft/libft.a

$(OBJS):
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	$(MAKE) fclean -C Libft
	$(RM) $(OBJS) $(NAME).a

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: bonus all clean fclean re