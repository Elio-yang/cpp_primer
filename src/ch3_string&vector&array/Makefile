CFLAGE = -Wall -Og
LIB = -lstdc++
ALL = string_test vector_test
all: string_test vector_test

string_test :string_test.cpp
	gcc $(CFLAGE) -o string_test string_test.cpp $(LIB)

vector_test: vector_test.cpp
	gcc $(CFLAGE) -o vector_test vector_test.cpp $(LIB)

clean:
	rm -f *.o $(ALL)