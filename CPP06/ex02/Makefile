NAME = convert

FLAGS = -Wall -Wextra -std=c++98

CXX = c++

OBJS = $(SRCS:.cpp=.o)

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp

all: $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

