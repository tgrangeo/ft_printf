# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/12/03 10:28:31 by thomasgrang  #+#   ##    ##    #+#        #
#    Updated: 2020/01/23 14:43:25 by tgrangeo    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #


HEADER = libftprintf.h

SRCS = ft_printf.c includes/ft_itoa_base.c includes/ft_test_type.c\
includes/ft_type.c includes/ft_type2.c includes/ft_traitement.c apply/apply_width.c apply/apply_precision.c\
flags/init_struct_flags.c flags/ft_prec_width.c apply/apply_zero.c flags/ft_zero.c flags/ft_count.c\

OBJS = ${SRCS:.c=.o}

NAME_LIB	=	libft/libft.a

NAME = libftprintf.a

RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror -g3

all: $(NAME_LIB) $(NAME)

%.o: %.c $(LIBFT) $(HEADER)
	gcc $(FLAGS) -c $< -o $@
$(NAME): $(OBJS) $(HEADER)
	cp libft/libft.a ./$(NAME) 
	ar rcs $(NAME) $(OBJS)
$(NAME_LIB):
	cd libft && $(MAKE)
	
clean:
	$(RM) $(OBJS)
	cd libft && make clean
	
fclean:	clean
	$(RM) $(NAME)
	cd libft && make fclean
	
re: 	fclean all