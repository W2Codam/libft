# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: W2Wizard <w2.wizzard@gmail.com>              +#+                      #
#                                                    +#+                       #
#    Created: 2021/08/19 15:30:15 by W2Wizard      #+#    #+#                  #
#    Updated: 2021/08/19 23:48:15 by W2Wizard      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a
SRCDIR	= src

# AR is an archiving tool: r = Insert the files | s = Write an object-file index (ranlib) | c = Create
AR		= ar rsc

SRCS 	= $(shell find $(SRCDIR) -name *.c)
OBJS    = $(SRCS:.c=.o)

# Compile
all: $(NAME)

# Compile everything
$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@$(AR) $(NAME) $(OBJS)
		@echo "(INFO) Library ($(NAME)) created!"

# Clean object files
clean:
		@rm -f $(OBJS)
		@echo "(INFO) All objects removed!"

# Clean library file
fclean: clean
		@rm -f $(NAME)
		@echo "(INFO) Library ($(NAME)) removed!"

# Re-compile
re:		fclean all

# Phonies as not to confuse make, these are actual commands, not files.
.PHONY: all, clean, fclean, re