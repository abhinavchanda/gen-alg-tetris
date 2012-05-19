## Variables ##
CPP = clang++
OUT_FILE = run.out

WARN_FLAGS = -Wall -Wextra -Werror
INC_FLAG = -I inc

CPP_FILES = $(wildcard src/*.cpp)
OBJ_FILES = $(addprefix bin/, $(notdir $(CPP_FILES:.cpp=.o)))

LD_FLAGS = -o $(OUT_FILE)
CC_FLAGS = -I inc -Wall -Wextra -Werror -c

## Rules ##
all: $(OBJ_FILES)
	$(CPP) $(LD_FLAGS) $^

bin/%.o: src/%.cpp
	$(CPP) $(CC_FLAGS) -o $@ $<

clean:
	rm -f bin/*.o *.out
