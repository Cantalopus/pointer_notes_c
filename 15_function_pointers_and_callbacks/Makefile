SRC = $(wildcard src/*.cpp)
OBJ = $(patsubst src/%.cpp, build/%.o, $(SRC))

CXX = clang++
CXXFLAGS = -std=c++20 -Wall -Wextra -g
DEPFLAGS = -MD -MP
OPT = -O0
DEP = $(patsubst build/%.o,*build/%.d,$(OBJ))

.PHONY: all
all: ./bin/app

./bin/app: $(OBJ)
	$(CXX) $(OBJ) -o $@

build/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) $(OPT) $(DEPFLAGS) -Iinclude -c $< -o $@

-include $(DEP)

.PHONY: run
run: ./bin/app
	./bin/app

.PHONY: clean
clean:
	rm -f $(OBJ)
	rm -f $(DEP)
	rm -f ./bin/app
