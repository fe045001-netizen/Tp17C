CXX = g++
CXXFLAGS = -Wall -std=c++17 -Iinclude

TARGET = demo.exe

SRC = src/Point.cpp src/Segment.cpp src/Triangle.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o demo.exe


