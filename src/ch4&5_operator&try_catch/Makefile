CFLAGE = -Wall -Og -std=c++11
LIB = -lstdc++
ALL = try_test
COMPILE = gcc $(CFLAGE) -o
all: $(ALL)

try_test: try_test.cpp
	$(COMPILE) try_test try_test.cpp $(LIB)

clean:
	rm -f *.o $(ALL)
	