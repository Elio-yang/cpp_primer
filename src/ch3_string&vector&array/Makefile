CFLAGE = -Wall -Og -std=c++11
LIB = -lstdc++
ALL = string_test vector_test vector_ex iterator_test 
all: $(ALL)

string_test :string_test.cpp
	gcc $(CFLAGE) -o string_test string_test.cpp $(LIB)

vector_test: vector_test.cpp
	gcc $(CFLAGE) -o vector_test vector_test.cpp $(LIB)

vector_ex : vector_ex.cpp
	gcc $(CFLAGE) -o vector_ex vector_ex.cpp $(LIB)

iterator_test: iterator_test.cpp
	gcc $(CFLAGE) -o iterator_test iterator_test.cpp $(LIB)

clean:
	rm -f *.o $(ALL)