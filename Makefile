NAME = libft.a

FLAGS = -Wall -Werror -Wextra -g

IDIR = ./

SDIR = ./

PRINTF = ft_printf/handler.c ft_printf/error.c ft_printf/ph_alpha.c\
		 ft_printf/ph_num.c ft_printf/ph_float.c ft_printf/print_ph.c\
		 ft_printf/ftprintf.c\

SRC = ft_strdup.c ft_fstrdup.c ft_memalloc.c ft_strchr.c \
ft_strwcat.c ft_strlen.c ft_fstrjoin.c ft_strjoin.c ft_memset.c \
ft_strdel.c ft_strjoin.c ft_strwcpy.c ft_strnew.c ft_putstr.c\
ft_power.c ft_nsqr.c ft_memcpy.c ft_lstadd.c ft_lstnew.c ft_itoa_base.c\
ft_strrev.c to_lc.c is_num.c ft_atoi.c $(PRINTF)

OBJS = $(SRC:.c=.o)

default: all

all: $(NAME) clean

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -fr $(NAME)

re: fclean all
