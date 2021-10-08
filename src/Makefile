# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lde-la-h <lde-la-h@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/08 11:13:32 by lde-la-h      #+#    #+#                  #
#    Updated: 2021/10/08 11:13:37 by lde-la-h      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a
SRCDIR	= .

# AR is an archiving tool: r = Insert the files | s = Write an object-file index (ranlib) | c = Create
AR		= ar rsc

# Ugly disgusting and even more ugly, thanks norm :)
SRCS	= ft_abs.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_intlen.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_islower.c \
		ft_isprint.c \
		ft_isspace.c \
		ft_isupper.c \
		ft_itoa.c \
		ft_itoa_base.c \
		ft_max.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_min.c \
		ft_neg.c \
		ft_pow.c \
		ft_putchar.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_realloc.c \
		ft_split.c \
		ft_sqrt.c \
		ft_strchr.c \
		ft_strchrn.c \
		ft_strclen.c \
		ft_strdup.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strrev.c \
		ft_strtolower.c \
		ft_strtoupper.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

OBJS    = $(SRCS:.c=.o)

# Compile
all: $(NAME)

# Compile everything
$(NAME):
		$(CC) $(CFLAGS) -c $(SRCS)
		$(AR) $(NAME) $(OBJS)
		echo "(INFO) Library ($(NAME)) created!"

# Clean object files
clean:
		rm -f $(OBJS)
		echo "(INFO) All objects removed!"

# Clean library file
fclean: clean
		rm -f $(NAME)
		echo "(INFO) Library ($(NAME)) removed!"

# Re-compile
re:		fclean all

# Phonies as not to confuse make, these are actual commands, not files.
.PHONY: all, clean, fclean, re