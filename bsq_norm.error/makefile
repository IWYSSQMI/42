CC = cc
CCFLAGS = -Wall -Wextra -Werror
MAIN = main.c

NAME := rushbsq
SRCS := bsq.c
OBJS := $(patsubst %.c, %.o, $(SRCS))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CCFLAG) $(MAIN) $(OBJS) -o $(NAME)

$(OBJS) : %.o : %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all