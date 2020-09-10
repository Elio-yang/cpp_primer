CFLAGE = -Wall -Og -std=c++11
LIB = -lstdc++
ALL = string_test vector_test vector_ex iterator_test\
array_test
COMPILE = gcc $(CFLAGE) -o
all: $(ALL)

string_test :string_test.cpp
	$(COMPILE) string_test string_test.cpp $(LIB)

vector_test: vector_test.cpp
	$(COMPILE) vector_test vector_test.cpp $(LIB)

vector_ex : vector_ex.cpp
	$(COMPILE) vector_ex vector_ex.cpp $(LIB)

iterator_test: iterator_test.cpp
	$(COMPILE) iterator_test iterator_test.cpp $(LIB)
	
array_test : array_test.cpp
	$(COMPILE) array_test array_test.cpp $(LIB)	
clean:
	rm -f *.o $(ALL)