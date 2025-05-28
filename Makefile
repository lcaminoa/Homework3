CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++17 -I Headers

SRCS = main.cpp Sources/ConstructorJSON.cpp
TARGET = main

all: $(TARGET) run clean

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
	rm -rf $(TARGET).dSYM/