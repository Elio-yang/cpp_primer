CFLAGE = -Wall -Og -std=c++11
ALL = print_array arg_test va_args
COMPILE = g++ $(CFLAGE) -o
all: $(ALL)

print_array: print_array.cpp
	$(COMPILE)  print_array print_array.cpp

arg_test:arg_test.cpp
	$(COMPILE)  arg_test arg_test.cpp

va_args:va_args.cpp
	$(COMPILE)  va_args va_args.cpp

clean:
	rm -f *.o $(ALL)
	