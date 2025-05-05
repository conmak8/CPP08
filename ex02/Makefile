NAME		=		mutant
CXX			=		c++
FLAGS		=		-Wall -Werror -Wextra
STANDARD	=		--std=c++17
SRCS		=		main.cpp
HEADERS		=		MutantStack.hpp MutantStack.tpp
OBJS		=		$(SRCS:.cpp=.o)

%.o:%.cpp $(HEADERS)
	$(CXX) $(FLAGS) $(STANDARD) -o  $@ -c $<

$(NAME):$(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean all
