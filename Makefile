CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = calculator
SOURCE = main.cpp

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

clean:
	rm -f $(TARGET) $(TARGET).exe *.o

.PHONY: all clean
