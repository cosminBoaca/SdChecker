CPP_DEBUG_FLAGS=-std=c++11 -g
CPPFLAGS=-std=c++11 -O2

build:
	g++ main.cpp $(CPPFLAGS)

debug:
	g++ main.cpp $(CPP_DEBUG_FLAGS)


