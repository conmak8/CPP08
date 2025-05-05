NAME		=		span
CXX			=		c++
FLAGS		=		-Wall -Werror -Wextra
STANDARD	=		--std=c++17
SRCS		=		main.cpp Span.cpp
HEADERS		=		Span.hpp
OBJS		=		$(SRCS:.cpp=.o)

%.o:%.cpp $(HEADERS)
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


# NAME		=		span
# CXX			=		c++
# FLAGS		=		-Wall -Werror -Wextra
# STANDARD	=		--std=c++17
# SRCS		=		main.cpp Span.cpp
# OBJS		=		$(SRCS:.cpp=.o)

# %.o:%.cpp
# 	$(CXX) $(FLAGS) $(STANDARD) -o $@ -c $<

# $(NAME):$(OBJS)
# 	$(CXX) $(OBJS) -o $(NAME)

# all: $(NAME)

# clean:
# 	rm -rf $(OBJS)

# fclean: clean
# 	rm -rf $(NAME)

# re: fclean all

# .PHONY: re clean fclean all


