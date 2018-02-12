# make file for dioci posix tests (simple interpreter for embedded systems)
# @author M A Chatterjee <deftio [at] deftio [dot] com>

# test coverage is achieved usding gcov (part of gcc suite)
# this is done with the flags  -ftest-coverage -fprofile-arcs 
# see run_coverage_test.sh to see how to call code coverage tests        
CC=g++
CFLAGS = -I -Wall /usr/lib/libgtest.a /usr/lib/libgtest_main.a
DEPS   = pch.h
OBJ    = test.o
                  
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) 

test-library.out: $(OBJ)
	g++ -o $@ $^ $(CFLAGS) -lm -Os 

clean :
	rm  *.o