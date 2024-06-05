##
## EPITECH PROJECT, 2023
## Libmy
## File description:
## The Makefile of the libmy
##

NAME    =       libmy.a

SRCS	=	my_array_of_array_len.c		\
		my_char_isprintable.c		\
		my_compute_factorial_rec.c	\
		my_compute_power_rec.c		\
		my_compute_power_rec_size_t.c	\
		my_compute_square_root.c	\
		my_concat_params.c		\
		my_convert_base.c		\
		my_convert_base_unsigned.c	\
		my_convert_base_size_t.c	\
		my_find_prime_sup.c		\
		my_getnbr.c			\
		my_getnbr_base.c		\
		my_isneg.c			\
		my_is_prime.c			\
		my_params_to_array.c		\
		my_print_combn.c		\
		my_print_params.c		\
		my_put_nbr.c			\
		my_putchar.c			\
		my_putnbr_base.c		\
		my_putstr.c			\
		my_putstr_error.c		\
		my_putstr_sized.c		\
		my_rev_params.c			\
		my_revstr.c			\
		my_round_float_str.c		\
		my_show_param_array.c		\
		my_show_word_array.c		\
		my_showmem.c			\
		my_showstr.c			\
		my_sort_int_array.c		\
		my_sort_params.c		\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_str_isprintable.c		\
		my_str_isupper.c		\
		my_str_nbr.c			\
		my_str_nbr_short.c		\
		my_str_nbr_short_short.c	\
		my_str_nbr_base_unsigned.c	\
		my_str_nbr_base_long_long_int.c	\
		my_str_nbr_unsigned.c		\
		my_str_nbr_unsigned_long.c	\
		my_str_nbr_base_unsigned_short.c\
		my_str_nbr_base_unsigned_short_short.c\
		my_str_nbr_base_unsigned_size_t.c\
		my_str_nbr_base_unsigned_long.c	\
		my_str_nbr_long_long.c		\
		my_str_nbr_size_t.c		\
		my_str_to_word_array.c		\
		my_strcapitalize.c              \
		my_strcat.c                     \
		my_strcmp.c                     \
		my_strcpy.c                     \
		my_strdup.c			\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strstr.c			\
		my_strupcase.c			\
		my_swap.c			\
		my_printf.c			\

OBJS	=	$(SRCS:.c=.o)
OBJS	+=	$(wildcard flags/*.o)

HEADER	=	my.h

CFLAGS	=	-Werror -Wall -Wextra -Wpedantic

all:	allflags $(NAME) copy

allflags:
	@make -C./flags/

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: 	fclean all

copy:
	@cp $(NAME) ../$(NAME)
	@cp $(HEADER) ../../include/$(HEADER)
	@cp $(HEADER) flags/$(HEADER)
	@cp flags/myflags.h ../../include/
	@cp flags/myformats.h ../../include/
