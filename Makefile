# Compiler & flags
CXX = clang++
CXXFLAGS = -std=c++20 -Wall -Wextra -O2

# All .cpp files in folder
SRC = $(wildcard *.cpp)

# Convert filenames: a.cpp → a.o
OBJ = $(SRC:.cpp=.o)

# Final executable name
TARGET = library

all: $(TARGET)

# Link all object files
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile each object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Run the program after building
run: $(TARGET)
	./$(TARGET)

# Clean .o files and final program
clean:
	rm -f $(OBJ) $(TARGET)

