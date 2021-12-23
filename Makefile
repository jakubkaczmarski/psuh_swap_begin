# CC = gcc

# CFLAGS = -Wextra -Wall -Werror

# AR = ar rcs

# NAME = push_swap.a

# SRCS = 	

# BONUS = 

# printf = ft_printf/*

# libft  = libft/*

# SRCStest = createinput.c

# OBJS = $(SRCS:.c=.o)

# OBJS_B = $(BONUS:.c=.o)

# $(NAME): $(OBJS)
# 	$(AR) $(NAME) $(OBJS)

# $(OBJS): 
# 	$(CC) $(CFLAGS) -c $(SRCS)

# $(OBJS_B): 
# 	$(CC) $(CFLAGS) -c $(BONUS)

# all: $(NAME)

# bonus: fclean $(OBJS_B) $(OBJS)
# 	$(AR) $(NAME) $(OBJS_B) $(OBJS)

# clean:
# 	$(RM) $(OBJS) $(OBJS_B)

# fclean: clean
# 	$(RM) $(NAME) 

# re: fclean all

# test: fclean $(OBJS)
# 	$(CC) $(CFLAGS) $(SRCStest) $(printf)  $(libft) -o exec
# 	./exec

# so: 
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
# 	gcc -nostartfiles -shared -o libft.so $(OBJS)

# .PHONY: bonus all clean fclean re

# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# NAME = push_swap.a
# SRC = *.c libft/*.c ft_printf/*c

# OBJ = *.o
# all: $(NAME)
# $(NAME): $(OBJ)
# 	ar rc $(NAME) $(OBJ)
# $(OBJ): $(SRC)
# 	$(CC) $(CFLAGS) -g -c $(SRC)
# bonus: $(NAME)
# clean:
# 	rm -f *.o
# fclean: clean
# 	rm -f $(NAME)
# re: fclean all
# .PHONY: all, clean, fclean, re

NAME	:= push_swap.a

SRCS	=	atolongi.c helperfunctionsforlists.c operation_pb.c operation_rb.c operation_rra.c  operation_rrr.c  operation_sb.c\
			createinput.c  operation_pa.c operation_ra.c  operation_rr.c  operation_rrb.c  operation_sa.c   operation_ss.c

OBJS	= $(SRCS:.c=.o)

HEADER	:= push_swap.h

CC		:= gcc

CFLACS 	:= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft/
	$(MAKE) -C ./ft_printf/
	ar -crs push_swap.a $^
	ar -crs $(NAME) ./libft/libft.a ./ft_printf/libftprintf.a
	$(CC) -o myprog -l:push_swap

%.o: %.c $(HEADER)
	$(CC) $(CFLACS) -c $<

fclean: 
	rm -f $(NAME) $(OBJS) 
	$(MAKE) -C ./libft/ fclean
	$(MAKE) -C ./ft_printf/ fclean

clean: 
	rm -f $(OBJS) 
	$(MAKE) -C ./libft/ fclean
	$(MAKE) -C ./ft_printf/ fclean

re: fclean all
