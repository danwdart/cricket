CXX = g++
CXXFLAGS =

.PHONY: all

all: build/cricket

build/cricket:
	mkdir -p build
	$(CXX) $(CXXFLAGS) src/cricket.cpp -o build/cricket