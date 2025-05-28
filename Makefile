CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++14 -I Headers

SRCS = main.cpp Sources/Posicion.cpp Sources/Presion.cpp Sources/MedicionBase.cpp Sources/SaveFlightData.cpp
TARGET = main

all: $(TARGET) run clean

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) data.bin
	rm -rf main.dSYM/