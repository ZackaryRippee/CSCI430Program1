# Minimal Makefile
CXX ?= g++
CXXFLAGS ?= -Wall -g

SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)

all: main

main: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f main $(OBJS)
