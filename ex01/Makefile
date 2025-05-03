NAME		=		span
CXX			=		c++
FLAGS		=		-Wall -Werror -Wextra
STANDARD	=		--std=c++17
SRCS		=		
OBJS		=		$(SRCS:.cpp=.o)

%.o=%.cpp
	$(CXX) $(FLAGS) $(STANDARD) -o $@ -c $<

$(NAME):$(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re clean fclean all
