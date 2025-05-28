CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++14 -I Headers

SRCS = main.cpp Sources/Punto.cpp Sources/Circulo.cpp Sources/Elipse.cpp Sources/Rectangulo.cpp
TARGET = main

all: $(TARGET) run clean

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) data.bin
	rm -rf main.dSYM/