# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 17:33:21 by chunchen          #+#    #+#              #
#    Updated: 2025/03/20 15:54:58 by chunchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
CFLAGS = -Wall -Wextra -Werror

# Colors and emoji definitions
GREEN = \033[1;32m
BLUE = \033[1;34m
YELLOW = \033[1;33m
RED = \033[1;31m
WHITE = \033[1;37m
RESET = \033[0m
TICK = ✓
BOOK = 📚
CLEAN = 🧹
ROCKET = 🚀
TOOLS = 🛠️

# Source files (merged regular and bonus)
SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c  ft_isdigit.c \
		ft_isprint.c  ft_memcpy.c  ft_memmove.c ft_memset.c  ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c  ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(SRCS:%.c=%.o)

# Calculate total number of files
TOTAL_FILES = $(words $(SRCS))

# Main targets
all: $(NAME)

$(NAME): print_start $(OBJS)
	@printf "\r$(BLUE)[$(YELLOW)██████████████████████████████$(BLUE)] $(WHITE)100%% $(GREEN)[43/43]$(RESET) $(YELLOW)Complete                       $(RESET)\n"
	@printf "$(GREEN)$(TICK) All files compiled! Building library...$(RESET)\n"
	@ar rcs $(NAME) $(OBJS)
	@printf "$(GREEN)$(BOOK) Library $(WHITE)$(NAME)$(GREEN) successfully created!$(RESET)\n"

# Print start message
print_start:
	@printf "$(BLUE)$(TOOLS) Compiling libft files ($(TOTAL_FILES) files total)...$(RESET)\n"
	@printf "$(BLUE)=====================================================$(RESET)\n"

# Single progress bar that updates with every file
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@$(eval COMPILED=$(shell find . -name "*.o" | wc -l))
	@$(eval PERCENT=$(shell echo $$(($(COMPILED) * 100 / $(TOTAL_FILES)))))
	@$(eval BAR_DONE=$(shell echo $$(($(COMPILED) * 30 / $(TOTAL_FILES)))))
	@$(eval BAR_TODO=$(shell echo $$((30 - $(BAR_DONE)))))
	@printf "\r$(BLUE)["
	@for i in `seq 1 $(BAR_DONE)`; do printf "$(YELLOW)█$(RESET)"; done
	@for i in `seq 1 $(BAR_TODO)`; do printf " "; done
	@printf "$(BLUE)] $(WHITE)%3d%% $(GREEN)[%2d/43]$(RESET) $(YELLOW)%-30s$(RESET)" \
		$(PERCENT) $(COMPILED) "$<"

# Cleaning targets
clean:
	@printf "$(YELLOW)$(CLEAN) Removing object files...$(RESET)\n"
	@rm -f $(OBJS)
	@printf "$(GREEN)$(TICK) All object files removed!$(RESET)\n"

fclean: clean
	@printf "$(YELLOW)$(CLEAN) Removing library file...$(RESET)\n"
	@rm -f $(NAME)
	@printf "$(GREEN)$(TICK) Library $(WHITE)$(NAME)$(GREEN) removed!$(RESET)\n"

re: fclean
	@printf "$(BLUE)$(ROCKET) Rebuilding project...$(RESET)\n"
	@$(MAKE) all

.PHONY = all clean fclean re print_start
