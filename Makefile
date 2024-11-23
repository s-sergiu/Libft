NAME=libft.a

CFLAGS=-Wall -Wextra -Werror -Iinclude
ARFLAGS=rcs

OBJ=  src/ft_atoi.o \
	  src/ft_bzero.o \
	  src/ft_calloc.o \
	  src/ft_isalnum.o \
	  src/ft_isalpha.o \
	  src/ft_isascii.o \
	  src/ft_isdigit.o \
	  src/ft_isprint.o \
	  src/ft_itoa.o \
	  src/ft_lstadd_back.o \
	  src/ft_lstadd_front.o \
	  src/ft_lstclear.o \
	  src/ft_lstdelone.o \
	  src/ft_lstiter.o \
	  src/ft_lstlast.o \
	  src/ft_lstmap.o \
	  src/ft_lstnew.o \
	  src/ft_lstsize.o \
	  src/ft_memchr.o \
	  src/ft_memcmp.o \
	  src/ft_memcpy.o \
	  src/ft_memmove.o \
	  src/ft_memset.o \
	  src/ft_putchar_fd.o \
	  src/ft_putendl_fd.o \
	  src/ft_putnbr_fd.o \
	  src/ft_putstr_fd.o \
	  src/ft_split.o \
	  src/ft_strchr.o \
	  src/ft_strdup.o \
	  src/ft_striteri.o \
	  src/ft_strjoin.o \
	  src/ft_strlcat.o \
	  src/ft_strlcpy.o \
	  src/ft_strlen.o \
	  src/ft_strmapi.o \
	  src/ft_strncmp.o \
	  src/ft_strnstr.o \
	  src/ft_strrchr.o \
	  src/ft_strtrim.o \
	  src/ft_substr.o \
	  src/ft_tolower.o \
	  src/ft_toupper.o

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $^

clean: 
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME) 

re: clean all

.PHONY: all clean fclean re
