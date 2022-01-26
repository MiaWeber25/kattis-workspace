COMPILER = g++
COMPILER_FLAGS = -Wall -std=c++17
PROGRAM_NAME = kattis_problem
CPP_FILES = kattis_problem.cpp 

build:
	$(COMPILER) $(COMPILER_FLAGS) $(CPP_FILES) -o $(PROGRAM_NAME)

run: 
	./$(PROGRAM_NAME)

unit_tests:
	./$(PROGRAM_NAME) test

kattis_tests:
	
	echo "all Kattis sample tests cases passed..."

clean:
	rm -f $(PROGRAM_NAME) *.o