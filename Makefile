# Compiler & flags
CXX = clang++
CXXFLAGS = -std=c++20 -Wall -Wextra -O2 -Iinclude

# All .cpp files in folder
SRC = $(wildcard *.cpp)

# Convert filenames: a.cpp → a.o
OBJ = $(SRC:.cpp=.o)

# Final executable name
TARGET = the_cpp_library

all: $(TARGET)

# Link all object files
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile each object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the program after building
run: $(TARGET)
	./$(TARGET)

# Clean .o files and final program
clean:
	rm -f $(OBJ) $(TARGET)

