NAME = Source

LIBS = -lgtest_main

debug: all
run-debug:
  ./${NAME}

all: $(NAME).o
	c++ -lstdc++ $(LIBS) -o $(NAME) $(NAME).o

compile: $(NAME).o

clean:
	find . -name '*.o' -exec rm -f {} ';'
	find . -name $(NAME) -exec rm -f {} ';'

$(NAME).o: $(NAME).c++
	gcc -c -I. -o $(NAME).o $(NAME).c++

.c++.o:
	gcc -c -I. -o $@ $<