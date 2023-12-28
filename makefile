# Makefile for the project

# Compiler and compiler flags
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra

# Directories
SRC_DIR = src
INCLUDE_DIR = include
OBJ_DIR = obj
BIN_DIR = bin
TEST_DIR = test

# Source files and objeqct files
MAIN_SRC = $(SRC_DIR)/main.cpp
ASSISTANT_SRC = $(SRC_DIR)/employee/assistant.cpp

SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(SRC_DIR)/employee/*.cpp)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC_FILES))

# Targets
all: $(BIN_DIR)/main

$(BIN_DIR)/main: $(OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR) $(OBJ_DIR)/employee
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Test target
test: $(BIN_DIR)/test
	./$(BIN_DIR)/test

$(BIN_DIR)/test: $(TEST_DIR)/test.cpp $(OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) $^ -o $@

# Clean target
clean:
	rm -rf $(BIN_DIR) $(OBJ_DIR)

.PHONY: all test clean
