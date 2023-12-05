# Makefile for building and running C++ programs on M1 Mac

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++17

# Build target
TARGET = program

# Source files
SRC = $(wildcard *.cpp)

# Object files
OBJ = $(SRC:.cpp=.o)

# Rule to make the target
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Rule for object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Rule to run the program
run: $(TARGET)
	./$(TARGET)

# Clean target
clean:
	rm -f $(TARGET) $(OBJ)

# Phony targets
.PHONY: clean run

