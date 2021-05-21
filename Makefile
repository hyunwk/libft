NAME = libft.a
CC = GCC
CFLAGS = -Wall -Werror -Wextra
AR = ar
ARFLAGS = rcs

FUNC =	ft_memset\
		ft_bzero \
		ft_memcpy \
		ft_memccpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strmapi \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \

FUNC_BONUS = ft_lstnew\
	ft_lstadd_front\
	ft_lstsize\
	ft_lstlast\
	ft_lstadd_back \
	ft_lstdelone \
	ft_lstclear \
	ft_lstiter \
	ft_lstmap \

SRCS = $(addsuffix .c, $(FUNC))
SRCS_BONUS = $(addsuffix .c, $(FUNC_BONUS))
OBJS= $(addsuffix .o, $(FUNC))
OBJS_BONUS = $(addsuffix .o, $(FUNC_BONUS))

.c.o : $(SRCS) $(SRCS_BONUS) 
	$(CC) $(CFLAGS) -c -o $@ $^

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus :  $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $^

clean :
	rm -f $(OBJS) $(OBJS_BONUS)

fclean : clean 
	rm -f $(NAME)

re : fclean all
