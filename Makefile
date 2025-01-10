SRC_DIR = src
BUILD_DIR = build
CC = g++
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp $(SRC_DIR)/**/*.cpp)
OBJ_NAME = play
INCLUDE_PATHS = -I include/SDL2 -I include/SDL2_image -I include/SDL2_ttf \
								-I$(SRC_DIR)/core -I$(SRC_DIR)/entities -I$(SRC_DIR)/systems  
LIBRARY_PATHS = -L lib/SDL2 -L lib/SDL2_image -L lib/SDL2_ttf
COMPILER_FLAGS = -std=c++11 -Wall -O0 -g
LINKER_FLAGS = -lSDL2 -lSDL2_image -lSDL2_ttf

all:
	$(CC) $(COMPILER_FLAGS) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(SRC_FILES) $(LINKER_FLAGS) -o $(BUILD_DIR)/$(OBJ_NAME)

run: all
	./$(BUILD_DIR)/$(OBJ_NAME)