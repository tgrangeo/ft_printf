# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: thomasgrangeon <thomasgrangeon@student.    +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/12/03 10:28:31 by thomasgrang  #+#   ##    ##    #+#        #
#    Updated: 2019/12/21 12:07:01 by thomasgrang ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #


HEADER = ft_printf.h

SRCS = ft_printf.c includes/ft_find_index.c includes/ft_itoa_base.c includes/ft_putnbr_u.c includes/init_struct_type.c\
includes/ft_type.c includes/ft_type2.c includes/ft_traitement.c flags/ft_width.c flags/ft_precision.c\
includes/init_struct_flags.c flags/ft_prec_width.c flags/ft_zero.c\

OBJS = ${SRCS:.c=.o}

NAME_LIB	=	libft/libft.a

NAME = libftprintf.a

RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

%.o: %.c $(HEADER)
	cd libft && $(MAKE)
	gcc $(FLAGS) -c $< -o $@
$(NAME): $(OBJS) $(HEADER)
	cp libft/libft.a ./$(NAME) 
	ar rcs $(NAME) $(OBJS)
	@cat libft/sucepute.txt

test: fclean all
	@gcc main.c $(NAME)
	@./a.out
	
	
clean:
	$(RM) $(OBJS)
	cd libft && make clean
	
fclean:	clean
	$(RM) $(NAME)
	cd libft && make fclean
	
re: 	fclean all