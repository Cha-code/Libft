# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chruhin <chruhin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 14:21:02 by chruhin           #+#    #+#              #
#    Updated: 2024/03/03 11:35:28 by chruhin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# name of the archive file
NAME				=		libft.a

# Directories
SRC_DIR				=		src
OBJ_DIR				=		obj
INC_DIR				=		inc

# Source files
DIRS				=		ch_manipulation linked_list mem_manipulation output_to_fd str_convert str_manipulation
SRCS				=		$(foreach dir,$(DIRS),$(filter %.c,$(shell find $(SRC_DIR)/$(dir) -type f)))

# Object files
OBJS				=		$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Header files
INCS				=		$(addprefix -I, $(INC_DIR))

# Compiler flags
CFLAGS				=		-Wall -Wextra -Werror

# Cleanup
RM					=		rm -rf

# Archive flags
AR					=		ar -rcs

# No exceptions
.PHONY:						all clean fclean re

# Targets
all:						$(NAME)

# Create a directory for obj
$(OBJ_DIR):
							@mkdir -p $(OBJ_DIR)

# Compiling obj
$(OBJ_DIR)/%.o:				$(SRC_DIR)/%.c | $(OBJ_DIR)
							@mkdir -p $(dir $@)
							@$(CC) $(CFLAGS) $(INCS) -c $< -o $@

# Compiling exec
$(NAME): 					$(OBJ_DIR) $(OBJS)
							@$(AR) $@ $(OBJS)

# Remove object files
clean:
							@$(RM) $(OBJ_DIR)

# Remove obj & exec files
fclean:						clean
							@$(RM) $(NAME)

# remove all & recompile
re:							fclean all
